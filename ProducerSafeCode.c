#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>
#define TRUE 1

typedef int buffer_item;
#define BUFFER_SIZE 5

// Below step is for creating ProducerMiddleman Buffer
buffer_item producerMiddlemanBuffer[BUFFER_SIZE]; 
// Below step is for creating MiddleManConsumer Buffer
buffer_item middlemanConsumerBuffer[BUFFER_SIZE]; 

//Declaration of Mutexes
pthread_mutex_t mutex,mutex1; 
//Declartion of Seamaphores
sem_t full, empty,full1,empty1;

//Below step is for declaring variables for Producer , Middleman and Consumer Counter 
int in=0,out=0,in1=0,out1=0,producerMiddlemenCounter=0,middleManConsumerCounter=0; 
//Below step is for storing Thread id's of Producer , Middleman and Consumer
pthread_t producerThreads,middleManThreads,consumerThreads;

//Below step is for defining Thread Attributes
pthread_attr_t attributes;


//Below display function prints the items from buffer if buffer is not empty other wise it will print empty.


void display(buffer_item* buf,char * queue,int inVal ,int outVal){
	if(buf[0]==0){
		printf("[""empty""]");
	}
	else {
		printf("[""%d""]",buf[0]);
	}
	if(buf[1]==0){
		printf("[""empty""]");
	}
	else {
		printf("[""%d""]",buf[1]);
	}
	if(buf[2]==0){
		printf("[""empty""]");
	}
	else {
		printf("[""%d""]",buf[2]);
	}
	if(buf[3]==0){
		printf("[""empty""]");
	}
	else {
		printf("[""%d""]",buf[3]);
	}
	if(buf[4]==0){
		printf("[""empty""]");
	}
	else {
		printf("[""%d""]",buf[4]);
	}
	printf(" in=%d ,",inVal);

	printf(" out=%d ,",outVal);
	printf("queue=%s\n",queue);

}

// With help of Below insert-item function Producer will inserts the items into the ProducerMiddleman Buffer

int insert_item(buffer_item item) {
    //Below step will obtain empty lock
    sem_wait(&empty); 
    //Below step will obtain mutex lock
	pthread_mutex_lock(&mutex);
	//Below If condition check whether the buffer is full or not. and if buffer is not full then it add item and increment the buffer counter
	if(producerMiddlemenCounter< BUFFER_SIZE) {
        //Below step is to Insert item into the buffer
		producerMiddlemanBuffer[in] = item; 
		printf("Insert_item inserted item %d at position %d\n",item,in);
        //Below step to Increment the value of Buffer
		in=(in+1) % BUFFER_SIZE; 
        //Below step is to Increment the buffer counter
		producerMiddlemenCounter++; 
        //Below step to to declare name of the Queue
		char* queue1="Producer/Middleman"; 
        //Below function is is to display  elements of buffer
		display(producerMiddlemanBuffer,queue1,in ,out); 
	}
    //Below code indicates seamphore as full
    sem_post(&full); 
    //Below line is to Release mutex lock
	pthread_mutex_unlock(&mutex);  
}

//Middleman will removes element form ProducerMiddleman Buufer using Below remove_item function 

int remove_item(buffer_item *item) {
     //Below step will obtain empty lock
	sem_wait(&full); 
     //Below step will obtain mutex lock
    pthread_mutex_lock(&mutex); 
	if(producerMiddlemenCounter > 0) {
        //Below step is to Decrement the buffer counter
		producerMiddlemenCounter--;  
		*item=producerMiddlemanBuffer[out]; 
		producerMiddlemanBuffer[out]=0;
		printf("Remove_item removed item %d at position %d\n",*item, out);
		out =(out+1)%BUFFER_SIZE ; 
        //Below step to to declare name of the Queue
		char * queue2="Producer/Middleman"; 
        //Below function is is to display  elements of buffer
		display(producerMiddlemanBuffer,queue2,in,out); 
	}
	sem_post(&empty); 
    pthread_mutex_unlock(&mutex);
}


// With help of Below insert-item1 function Middleman will inserts the items into the MiddlemanConsumer Buffer

int insert_item1(buffer_item item) {
     //Below step will obtain empty lock
	sem_wait(&empty1);
    //Below step will obtain mutex lock
    pthread_mutex_lock(&mutex1); 
	if(middleManConsumerCounter< BUFFER_SIZE) {
        //Below step will Insert the item into the buffer
		middlemanConsumerBuffer[in1] = item; 
		printf("Insert_item inserted item %d at position %d\n",item,in1);
		in1=(in1+1) % BUFFER_SIZE; 
        //Below step is to Increment the buffer counter
		middleManConsumerCounter++; 
         //Below step to to declare name of the Queue
		char * queue3="Middleman/Consumer";
        //Below function is is to display  elements of buffer
		display(middlemanConsumerBuffer,queue3,in1,out1); 
	}
    sem_post(&full1); 
	pthread_mutex_unlock(&mutex1); 
}

//Consumer will removes element form MiddlemanConsumer Buufer using Below remove_item1 function 

int remove_item1(buffer_item *item) {
     //Below step will obtain empty lock
	sem_wait(&full1);
     //Below step will obtain mutex lock
    pthread_mutex_lock(&mutex1); 
	if(middleManConsumerCounter > 0) {
        //Below step is to Decrement the buffer counter
		middleManConsumerCounter--; 
        // Below step store the Item to be deleted
		*item=middlemanConsumerBuffer[out1]; 
         //Below step Store the deleted item to  be 0
		middlemanConsumerBuffer[out1]=0;
		printf("Remove_item removed item %d at position %d\n",*item, out1);
        //Below step Increment the out1 value
		out1 =(out1+1)%BUFFER_SIZE ; 
         //Below step to to declare name of the Queue
		char * queue4="Middleman/Consumer"; //Queue name
        //Below function is is to display  elements of buffer
		display(middlemanConsumerBuffer,queue4,in1,out1); 
	}
	sem_post(&empty1); //Signal sempahore as empty
    pthread_mutex_unlock(&mutex1); //Release mutex lock
}

/**
Below function is for creating a producer thread

 **/
void *producer(void *param) {
	buffer_item item;
	while(TRUE) {
		int pSleepRandomNum = (rand()%3)+1; //Generating random number for sleep
		printf("Producer thread %ld sleeping for %d seconds \n ",pthread_self(),pSleepRandomNum);
		sleep(pSleepRandomNum); //sleep for the random amount of time.
		item = (rand()%50)+1;  //Random number for inserting item in to a buffer
		//Call insert_item to insert item in to buffer
		if(insert_item(item)<0) {
			printf("Producer error\n");
		}
		else {
			printf("Producer thread %ld inserted value %d\n",pthread_self(),item);
		}
	}
	//Exit producer thread
	pthread_exit(NULL);
}

/**
Below function is for creating a middleman thread
 **/
void *middleman(void *param) {
	buffer_item item;
	while(TRUE) {
		int mSleepRandomNum = (rand()%3)+1; //Generating random number for sleep
		printf("Middleman thread %ld sleeping for %d seconds \n ",pthread_self(),mSleepRandomNum);
		sleep(mSleepRandomNum); //sleep for the random amount of time.
		//Call remove_item to delete the item from the buffer
		if(remove_item(&item)<0) {
			printf("Middleman error\n");
		}
		else {
			printf("Middleman thread %ld removed value %d\n",pthread_self(),item);
		}
		//Call insert_item1 to insert item in to buffer

		if(insert_item1(item)<0) {
			printf("Middleman error\n");
		}
		else {
			printf("Middleman thread %ld inserted value %d\n",pthread_self(),item);
		}

	}
	//Exit Middleman Thread
	pthread_exit(NULL);
}

//Below function is for creating a consumer thread

void *consumer(void *param) {
	buffer_item item;
	while(TRUE) {
		int cSleepRandomNum = (rand()%3)+1; 
		printf("Consumer thread %ld sleeping for %d seconds \n ",pthread_self(),cSleepRandomNum);
		sleep(cSleepRandomNum); 
		//call remove_item1 to delete the item from the buffer
		if(remove_item1(&item)<0) {
			printf("Consumer error\n");
		}
		else {
			printf("Consumer thread %ld removed value %d \n",pthread_self(),item);
		}

	}
	pthread_exit(NULL);
}


int main(int argc, char *argv[]) {
	printf("Main thread beginning\n");
	int i,j,k;

	//Below line will Check weather correct number of arguments are passed or not
	if(argc != 5) {
		fprintf(stderr," Pass correct number of arguments\n");
	}
	//Below step is to  pass arguments to main function while executing the program
	int sleepTime = atoi(argv[1]); 
	int numOfProducers = atoi(argv[2]); 
	int numOfMiddlemans = atoi(argv[3]); 
	int numOfConsumers = atoi(argv[4]); 
    //Below step will Create mutex lock
	pthread_mutex_init(&mutex, NULL); 
    //Below step will Initialize sempahore full to 0.
	sem_init(&full, 0, 0); 
     //Below step will Initialize empty semaphore to BUFFER_SIZE
	sem_init(&empty, 0, BUFFER_SIZE); 
    //Below step will Create mutex lock
	pthread_mutex_init(&mutex1, NULL);
    //Below step to set intial sempahore full1 to 0.
	sem_init(&full1, 0, 0); 
    //Below step to set intial empty1 semaphore to BUFFER_SIZE
	sem_init(&empty1, 0, BUFFER_SIZE); 
    //Below Step will retrive number of  default attributes
	pthread_attr_init(&attributes); 

    //Below step will Define the number of producer threads
	pthread_t producerThreads[numOfProducers]; 
    //Below step will Define the number of Middleman threads
	pthread_t middleManThreads[numOfMiddlemans];
    //Below step will Define the number of Consumer threads 
	pthread_t consumerThreads[numOfConsumers]; 

	//Below loop will Create number of  producer threads based on user input
	for(i = 0; i < numOfProducers; i++) {
        //Below step will Create Producer thread
		pthread_create(&producerThreads[i],&attributes,producer,NULL); 
		printf("Creating  producer thread with id %lu\n", producerThreads[i]);
	}

	//Below loop will Create number of  middleman threads based on user input
	for(j = 0; j < numOfMiddlemans; j++) {
        //Below step will Create Middleman thread
		pthread_create(&middleManThreads[j],&attributes,middleman,NULL); 
		printf("Creating  middleman thread with id %lu\n", middleManThreads[j]);
	}

	//Below loop will Create number of consumer threads based on user input
	for(k = 0; k < numOfConsumers; k++) {
        //Below step will Create consumer thread
		pthread_create(&consumerThreads[k],&attributes,consumer,NULL); 
		printf("Creating consumer thread with id %ld\n", consumerThreads[k]);
	}


	printf(" Main thread sleeping for %d seconds \n",sleepTime);
	sleep(sleepTime); 

	printf("Main thread exiting\n");
	exit(0); 
}
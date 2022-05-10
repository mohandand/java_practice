#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>
#define TRUE 1

typedef int buffer_item;
#define BUFFER_SIZE 5

// Below step is for creating Producer or Middleman Buffer
buffer_item producerMiddlemanBuffer[BUFFER_SIZE]; 
// Below step is for creating MiddleMan or Consumer Buffer
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

/**
Below function displays the items from buffer when called

 **/

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

/**
Below function inserts the items in the buffer

 **/
int insert_item(buffer_item item) {
    sem_wait(&empty); //Acquire  empty lock
	pthread_mutex_lock(&mutex);//Acquire mutex lock
	//If the buffer is not full add item and increment the buffer counter
	if(producerMiddlemenCounter< BUFFER_SIZE) {
		producerMiddlemanBuffer[in] = item; //Insert the item in to the buffer
		printf("Insert_item inserted item %d at position %d\n",item,in);
		in=(in+1) % BUFFER_SIZE; //Increment the in value to point to next avaiable free slot
		producerMiddlemenCounter++; //Increment the buffer counter
		char* queue1="Producer/Middleman"; //Queue name
		display(producerMiddlemanBuffer,queue1,in ,out); //This method is called to display buffer elements

	}
    sem_post(&full); //Signal the semaphore as full
	pthread_mutex_unlock(&mutex);  //Release mutex lock
}

/**

Below function removes an item from the buffer

 **/
int remove_item(buffer_item *item) {
	sem_wait(&full); // Acquire the full lock
    pthread_mutex_lock(&mutex); //Acquire mutex lock
	if(producerMiddlemenCounter > 0) {
		producerMiddlemenCounter--;  //Decrement the buffer counter
		*item=producerMiddlemanBuffer[out]; 
		producerMiddlemanBuffer[out]=0;
		printf("Remove_item removed item %d at position %d\n",*item, out);
		out =(out+1)%BUFFER_SIZE ; 
		char * queue2="Producer/Middleman"; 
		display(producerMiddlemanBuffer,queue2,in,out); 
	}
	sem_post(&empty); 
    pthread_mutex_unlock(&mutex);
}

/**
Below function inserts an item in Middleman/Consumer buffer

 **/
int insert_item1(buffer_item item) {
	sem_wait(&empty1); //Acquire  empty lock
    pthread_mutex_lock(&mutex1); //Acquire mutex lock
	if(middleManConsumerCounter< BUFFER_SIZE) {
		middlemanConsumerBuffer[in1] = item; //Insert the item in the buffer
		printf("Insert_item inserted item %d at position %d\n",item,in1);
		in1=(in1+1) % BUFFER_SIZE; //Increment the in1 value to point to next avaiable free slot
		middleManConsumerCounter++; //Increment the buffer counter
		char * queue3="Middleman/Consumer"; //Queue name
		display(middlemanConsumerBuffer,queue3,in1,out1); //This method is called to display buffer elements	
	}
    sem_post(&full1); 
	pthread_mutex_unlock(&mutex1); 
}

/**
Below function removes an item in Middleman/Consumer buffer

 **/
int remove_item1(buffer_item *item) {
	sem_wait(&full1); // Acquire the full lock
    pthread_mutex_lock(&mutex1); //Acquire mutex lock
	if(middleManConsumerCounter > 0) {
		middleManConsumerCounter--; //Decrement the buffer counter
		*item=middlemanConsumerBuffer[out1]; // Item to be deleted
		middlemanConsumerBuffer[out1]=0; //Store the deleted item to  be 0
		printf("Remove_item removed item %d at position %d\n",*item, out1);
		out1 =(out1+1)%BUFFER_SIZE ; //Increment the out1 value to point to first filled spot
		char * queue4="Middleman/Consumer"; //Queue name
		display(middlemanConsumerBuffer,queue4,in1,out1); //This method is called to display buffer elements	
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

/**
Below function is for creating a consumer thread
 **/
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

	//Checking if correct number of arguments are passed
	if(argc != 5) {
		fprintf(stderr," Pass correct number of arguments\n");
	}
	//arguments passed to main function while running the program
	int sleepTime = atoi(argv[1]); 
	int numOfProducers = atoi(argv[2]); 
	int numOfMiddlemans = atoi(argv[3]); 
	int numOfConsumers = atoi(argv[4]); 

	pthread_mutex_init(&mutex, NULL); //Created mutex lock
	sem_init(&full, 0, 0); //Initialized sempahore full to 0.

	sem_init(&empty, 0, BUFFER_SIZE); //Initialized empty semaphore to BUFFER_SIZE
	pthread_mutex_init(&mutex1, NULL);//created mutex lock

	sem_init(&full1, 0, 0); //Initialized sempahore full1 to 0.
	sem_init(&empty1, 0, BUFFER_SIZE); //Initialized empty1 semaphore to BUFFER_SIZE

	pthread_attr_init(&attributes); //getting default attributes

	pthread_t producerThreads[numOfProducers]; //Defining the number of producer threads
	pthread_t middleManThreads[numOfMiddlemans]; //Defining the number of middleman threads
	pthread_t consumerThreads[numOfConsumers]; //Defining the number of consumer threads

	//Create number of  producer threads as per input.
	for(i = 0; i < numOfProducers; i++) {
		pthread_create(&producerThreads[i],&attributes,producer,NULL); //Create producer thread
		printf("Creating  producer thread with id %lu\n", producerThreads[i]);
	}

	//Create number of  middleman threads as per input.
	for(j = 0; j < numOfMiddlemans; j++) {
		pthread_create(&middleManThreads[j],&attributes,middleman,NULL); //Create middleman thread
		printf("Creating  middleman thread with id %lu\n", middleManThreads[j]);
	}

	//Create number of consumer threads as per input
	for(k = 0; k < numOfConsumers; k++) {
		pthread_create(&consumerThreads[k],&attributes,consumer,NULL); //Create consumer thread
		printf("Creating consumer thread with id %ld\n", consumerThreads[k]);
	}


	printf(" Main thread sleeping for %d seconds \n",sleepTime);
	sleep(sleepTime); 

	printf("Main thread exiting\n");
	exit(0); 
}
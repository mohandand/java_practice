//Bubble  Sortasasdsa
import java.util.Scanner;
class BubbleSort {
	public static void main(String []args) {
		int n, i, j, swap;
		Scanner in = new Scanner(System.in);
		System.out.println("Plese Enter number of integers to sort in desending order:");
		n = in.nextInt();
		int array[] = new int[n];
		System.out.println("Please Enter " + n + " integers to sort");
		for (i = 0; i < n; i++) 
		      array[i] = in.nextInt();
		for (i = 0; i < ( n - 1 ); i++) {
			for (j = 0; j < n - i - 1; j++) {
				if (array[j] > array[j+1]) 
				/* Swapping */ {
					swap       = array[j];
					array[j]   = array[j+1];
					array[j+1] = swap;
				}
			}
		}
		System.out.println("After Sorting result is below one:");
		for (i = 0; i < n; i++) 
		      System.out.println(array[i]);
	}
}
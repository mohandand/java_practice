// Java program to find sum of array
// elements using recursion.

class sumofarray {
	static int arr[] = { 1, 2, 3, 4, 5 };

	// Return sum of elements in A[0..N-1]
	// using recursion.
	static int findSum(int A[], int N)
	{
		if (N <= 0)
			return 0;
		return (findSum(A, N - 1) + A[N - 1]);
	}

	// Driver method
	public static void main(String[] args)
	{
		System.out.println(findSum(arr, arr.length));
	}
}

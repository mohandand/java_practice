import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class LargestValue1 {

    public static void main(String[] args) throws FileNotFoundException {
        FileReader fileReader = new FileReader("input.txt");
        Scanner sc = new Scanner(fileReader);

        int n = Integer.parseInt(sc.nextLine());
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(sc.nextLine());
        }

        int largevalue = largest(arr);
        System.out.println("Largest element in the array is: " + largevalue);
    }

    static int largest(int[] arr)
    {
        int low = 0, high = arr.length - 1;
        while(low < high)
        {
            int mid = (low + high) / 2;
            if(arr[mid] > arr[high])
            {
                high = mid;
            }
            else if(arr[mid] < arr[high])
            {
                low = mid + 1;
            }
        }

        return arr[low];
    }
}


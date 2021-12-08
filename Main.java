import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        FileReader fileReader = new FileReader("input.txt");
        Scanner sc = new Scanner(fileReader);

        int n = Integer.parseInt(sc.nextLine());
        int[] a = new int[n];
        for(int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(sc.nextLine());
        }

        int max = max(a);
        System.out.println("Largest element: " + max);
    }

    static int max(int[] a)
    {
        int low = 0, high = a.length - 1;
        while(low < high)
        {
            int mid = (low + high) / 2;
            if(a[mid] > a[high])
            {
                high = mid;
            }
            else if(a[mid] < a[high])
            {
                low = mid + 1;
            }
        }

        return a[low];
    }
}

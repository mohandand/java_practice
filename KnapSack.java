/*   	           Team Details
 Member1 : Name : Mohan Dandigam and  Netid: nj6956
 Member2 : Name : G.NIKHIL CHANDRA REDDY  and Netid: AF3138
*/

import java.io.FileReader;
import java.util.Scanner;

class KnapSack {

    static void displayKnapSack(int W, int weight[], int value[], int n)
    {
        int i, j;
        int K[][] = new int[n + 1][W + 1];

        for (i = 0; i <= n; i++) {
            for (j = 0; j <= W; j++) {
                if (i == 0 || j == 0)
                    K[i][j] = 0;
                else if (weight[i - 1] <= j)
                    K[i][j] = Math.max(value[i - 1] +
                            K[i - 1][j - weight[i - 1]], K[i - 1][j]);
                else
                    K[i][j] = K[i - 1][j];
            }
        }

        int res = K[n][W];
        System.out.println(res);

        j = W;
        for (i = n; i > 0 && res > 0; i--) {
            if (res == K[i - 1][j])
                continue;
            else {
                System.out.print(i + " ");

                res = res - value[i - 1];
                j = j - weight[i - 1];
            }
        }
    }

    public static void main(String arg[]) throws Exception
    {
        FileReader fileReader = new FileReader("input.txt");
        Scanner sc = new Scanner(fileReader);

        int n = Integer.parseInt(sc.nextLine());
        int value[] = new int[n];
        int weight[] = new int[n];
        int k=0;
        String nextLine = sc.nextLine();
        while(!nextLine.equals("*")) {
            String[] itemData = nextLine.split(",");

            value[k] = Integer.parseInt(itemData[0]);
            weight[k] = Integer.parseInt(itemData[1]);
            k++;

            nextLine = sc.nextLine();
        }

        int W = Integer.parseInt(sc.nextLine());
        displayKnapSack(W, weight, value, n);
    }
}

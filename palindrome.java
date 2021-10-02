
import java.util.Scanner;

class palindrome
{
 
// recursive function that returns the reverse of digits to check
static int reverse(int input, int temp)
{
    if (input == 0)
        return temp;
 
    // reverse of a number using maths
    temp = (temp * 10) + (input % 10);
 
    return reverse(input / 10, temp);
}
 public static void main (String[] args)
{
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter a number to check palindrome or not ..? ");
    int input = scanner.nextInt();
    int temp = reverse(input, 0);
     
    if (temp == input)
        System.out.println("yes");
    else
        System.out.println("no" );
}
}
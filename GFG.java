import java.util.*;  
class GFG
{
	static String encryptPlainText(char[] msg ,int a,int b)
	{
		String cipher = "";
		for (int i = 0; i < msg.length; i++)
		{
			// Avoid space to be encrypted
			/* applying encryption formula ( a x + b ) mod m
			{here x is msg[i] and m is 26} and added 'A' to
			bring it in range of ascii alphabet[ 65-90 | A-Z ] */
			if (msg[i] != ' ')
			{
				cipher = cipher
						+ (char) ((((a * (msg[i] - 'A')) + b) % 26) + 'A');
			} else // else simply append space character
			{
				cipher += msg[i];
			}
		}
		return cipher;
	}

	static String decryptCipherText(String cipher,int a, int b)
	{
		String msg = "";
		int a_inv = 0;
		int flag = 0;

		//Find a^-1 (the multiplicative inverse of a
		//in the group of integers modulo m.)
		for (int i = 0; i < 26; i++)
		{
			flag = (a * i) % 26;

			// Check if (a*i)%26 == 1,
			// then i will be the multiplicative inverse of a
			if (flag == 1)
			{
				a_inv = i;
			}
		}
		for (int i = 0; i < cipher.length(); i++)
		{
			/*Applying decryption formula a^-1 ( x - b ) mod m
			{here x is cipher[i] and m is 26} and added 'A'
			to bring it in range of ASCII alphabet[ 65-90 | A-Z ] */
			if (cipher.charAt(i) != ' ')
			{
				msg = msg + (char) (((a_inv *
						((cipher.charAt(i) + 'A' - b)) % 26)) + 'A');
			}
			else //else simply append space character
			{
				msg += cipher.charAt(i);
			}
		}

		return msg;
	}

	// Driver code
	public static void main(String[] args)
	{
		Scanner s= new Scanner(System.in); 
		System.out.print("Enter  value of message- "); 
		String plainTex = s.nextLine(); 
		
		// String msg = "AFFINE CIPHER";

		   //System.in is a standard input stream  
		Scanner sc= new Scanner(System.in); 
        System.out.print("Enter  value of a- ");  
        int a= sc.nextInt();  
        System.out.print("Enter value of b- ");  
        int b= sc.nextInt(); 
      
		// Calling encryption function
		String cipherText = encryptPlainText(plainTex.toCharArray(),a,b);
		System.out.println("After Encryption Text is : " + cipherText);

		// Calling Decryption function
		System.out.println("After Decryption Text is: " + decryptCipherText(cipherText,a,b));

	}
}

// This code contributed by Rajput-Ji

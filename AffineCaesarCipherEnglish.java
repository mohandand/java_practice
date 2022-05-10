import java.util.*;  

class AffineCaesarCipherEnglish
{
	static String encryptMessage(char[] plainText ,int a,int b)
	{
		String cipheText = "";
        /*Below is the Main Logic to convert Plain Text to Cipher Text
          Based on Key values of a and b. Here we are making use of Encryption Formula which is (a x + b)
           and other calculations*/
		for (int i = 0; i < plainText.length; i++)
		{
			if (plainText[i] != ' ')
			{
				cipheText = cipheText
						+ (char) ((((a * (plainText[i] - 'A')) + b) % 26) + 'A');
			} else
			{
				cipheText += plainText[i];
			}
		}
		return cipheText;
	}

	static String decryptCipherText(String cipher,int a, int b)
	{
		String plainText = "";
		int a_inverse = 0;
		int flagValue = 0;

        /*Below is the Main Logic to convert decrypt Cypher Text
        Here we are making use of Decryption Formula which is a^-1 ( x - b ) mod m
        and other calculations*/

		for (int i = 0; i < 26; i++)
		{
			flagValue = (a * i) % 26;

			if (flagValue == 1)
			{
				a_inverse = i;
			}
		}
		for (int i = 0; i < cipher.length(); i++)
		{
			if (cipher.charAt(i) != ' ')
			{
				plainText = plainText + (char) (((a_inverse *
						((cipher.charAt(i) + 'A' - b)) % 26)) + 'A');
			}
			else
			{
				plainText += cipher.charAt(i);
			}
		}

		return plainText;
	}

	public static void main(String[] args)
	{
		Scanner s= new Scanner(System.in); 
		System.out.print("Enter Plain Text to Convert to Affine Caesar Cipher: "); 
		String plainText = s.nextLine(); 
		
		Scanner sc= new Scanner(System.in); 
        System.out.print("Enter Key value of a:");  
        int a= sc.nextInt();  
        System.out.print("Enter Key value of b:");  
        int b= sc.nextInt(); 
      
		String cipherText = encryptMessage(plainText.toCharArray(),a,b);  //Encryption Method will be called here
		System.out.println("After Encryption Text is : " + cipherText);

		System.out.println("After Decryption Text is: " + decryptCipherText(cipherText,a,b)); //Decryption Method will be called here

	}
}


    
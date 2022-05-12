import java.util.*;

public class AffineCipherEnglish {

    public static String encryptPlainText(int a, int b, String plainText) {

        int gcd = 1;
        //Checking gcd is one or not for validating key value
        for (int i = 1; i <= a && i <= 26; i++) {
            if (a % i == 0 && 26 % i == 0)
                gcd = i;
        }

        if (gcd != 1) {
            System.out.println("Invalid Key value for 'a' ");
            return "";
        }

        String cipheText = "";
        /*Below is the Main Logic to convert Plain Text to Cipher Text
          Based on Key values of a and b. Here we are making use of Encryption Formula which is (a x + b)
          and other calculations*/
        for (char item : plainText.toCharArray()) {
            if (item != ' ') {
                cipheText = cipheText + (char) ((a * (item - 'A') + b) % 26 + 'A');
            } else {
                cipheText = cipheText + item;
            }
        }
        return cipheText;
    }

    public static String decryptCipherText(int a, int b, String cipher) {
        //Checking gcd is one or not for validating key value
        int gcd = 1;
        for (int i = 1; i <= a && i <= 26; i++) {
            if (a % i == 0 && 26 % i == 0)
                gcd = i;
        }

        if (gcd != 1) {
            System.out.println("Invalid Key value of 'a'");
            return "";
        }

        int c = 0;
        int flagValue = 0;
        for (int i = 0; i < 26; i++) {
            flagValue = (a * i) % 26;
            if (flagValue == 1) {
                c = i;
            }
        }

        String cipherText = "";
        /*Below is the Main Logic to convert decrypt Cypher Text
          Here we are making use of Decryption Formula which is a^-1 ( x - b ) mod m
          and other calculations*/
        for (char item : cipher.toCharArray()) {
            if (item != ' ') {
                cipherText = cipherText + (char) (((c * ((item + 'A' - b)) % 26)) + 'A');
            } else {
                cipherText = cipherText + item;
            }
        }

        return cipherText;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter Plain Text to Convert to Affine Caesar Cipher: ");
        String plainText = s.nextLine();

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Key value of a:");
        int a = sc.nextInt();
        System.out.print("Enter Key value of b:");
        int b = sc.nextInt();
        // String pText = "TEST TEXT";
        // int a = 3, b = 20;
        String cipherText = encryptPlainText(a, b, plainText);;  //Encryption Method will be called here
		System.out.println("After Encryption Text is : " + cipherText);

		System.out.println("After Decryption Text is: " + decryptCipherText(a,b,cipherText)); //Decryption Method will be called here
    }
}
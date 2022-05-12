import java.util.*;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
  
public class AffineCaesarCipherAnyLanguage {
    public static String encryptPlainText(int a, int b, String text, String language) {
        int gcd = 1;
        for(int i = 1; i <= a && i <= language.length(); i++)
        {
            if(a%i==0 && language.length()%i==0)
                gcd = i;
        }

        if (gcd != 1) {
            System.out.println("Invalid 'a' value");
            return "";
        }

        String c = "";
         /*Below is the Main Logic to convert Plain Text to Cipher Text
           Based on Key values of a and b. Here we are making use of Encryption Formula 
           which is (a x + b)
           and other calculations*/
        for (char item : text.toCharArray()) {
            if (item != ' ') {
                c = c + language.charAt((a * language.indexOf(item) + b) % language.length());
            } else {
                c = c + item;
            }
        }
        return c;
    }

    public static String decryptCypherMessage(int a, int b, String cipherText, String language) {
        int gcd = 1;
        for(int i = 1; i <= a && i <= language.length(); i++)
        {
            if(a%i==0 && language.length()%i==0)
                gcd = i;
        }

        if (gcd != 1) {
            System.out.println("Invalid 'a' value");
            return "";
        }
        
        int c = 0;
        int flag = 0;
         /*Below is the Main Logic to convert decrypt Cypher Text
           Here we are making use of Decryption Formula 
           which is a^-1 ( x - b ) mod m
           and other calculations*/
        for (int i = 0; i < language.length(); i++)
        {
            flag = (a * i) % language.length();
            if (flag == 1)
            {
                c = i;
            }
        }

        String text = "";
        for (char item : cipherText.toCharArray()) {
            if (item != ' ') {
                int index = (c * (language.indexOf(item) - b)) % language.length();
                index = index < 0 ? index + language.length() : index;
                text = text + language.charAt(index);
            } else {
                text = text + item;
            }
        }

        return text;
    }

    public static void main(String[] args) {
        String plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        Scanner sc= new Scanner(System.in); 
        System.out.print("Enter Key value of a: ");  
        int a= sc.nextInt();  
        System.out.print("Enter Key value of b: ");  
        int b= sc.nextInt();  
        try {
            String languageFile = Files.readString(Path.of("languageFile.txt"));
            System.out.println("Plain Text Written in File is : " + languageFile);
            String cipherText = encryptPlainText(a, b, plainText.toUpperCase(), languageFile); //Calling Encryption Method
            System.out.println("After Encryption Text is : " + cipherText);
    
            String decryptedtext = decryptCypherMessage(a, b, cipherText, languageFile); //Calling Decryption Method
            System.out.println("After Decryption Text is : " +decryptedtext);
        } catch (IOException ex) {
            System.out.println(ex.toString());
        }
    }
}

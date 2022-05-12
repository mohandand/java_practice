import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class AffineCipher {

    public static String Encrypt(int a, int b, String text, String language) {
        int gcd = 1;
        //Checking gcd is one or not for validating key value
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
        for (char item : text.toCharArray()) {
            if (item != ' ') {
                c = c + language.charAt((a * language.indexOf(item) + b) % language.length());
            } else {
                c = c + item;
            }
        }

        return c;
    }

    public static String Decrypt(int a, int b, String cipher, String language) {
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
        for (int i = 0; i < language.length(); i++)
        {
            flag = (a * i) % language.length();
            if (flag == 1)
            {
                c = i;
            }
        }

        String text = "";
        for (char item : cipher.toCharArray()) {
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
        String pText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int a = 3, b = 20;

        try {
            String language = Files.readString(Path.of("language.txt"));
            System.out.println("Text from File:"  + language);
            String c = Encrypt(a, b, pText.toUpperCase(), language);
            System.out.println(c);
    
            String text = Decrypt(a, b, c, language);
            System.out.println(text);
        } catch (IOException ex) {
            System.out.println(ex.toString());
        }
    }

}
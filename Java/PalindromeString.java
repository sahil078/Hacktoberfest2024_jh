import java.util.Scanner;
public class exp6b {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string:");
        String inputString = scanner.nextLine();
        StringBuffer stringBuffer = new StringBuffer(inputString);
        String reversedString = stringBuffer.reverse().toString();
        // Check if the original string is a palindrome
        if (inputString.equalsIgnoreCase(reversedString)) {
            System.out.println("The string \"" + inputString + "\" is a palindrome.");
        }
        else {
            System.out.println("The string \"" + inputString + "\" is not a palindrome.");
        }
        System.out.println("Reversed String: " + reversedString);
    }

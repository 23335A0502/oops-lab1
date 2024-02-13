import java.util.Scanner;

public class GreetingProgram {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
System.out.print("Please enter your username: ");
String username = scanner.nextLine();
System.out.println("Hello, " + username + "!");
scanner.close();
    }
}

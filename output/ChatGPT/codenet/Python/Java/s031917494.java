// Java code
import java.util.Scanner;

public class s031917494 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int input = scanner.nextInt();
        
        System.out.print("Christmas");
        for (int i = 0; i < Math.abs(input - 25); i++) {
            System.out.print(" Eve");
        }
        
    }
}
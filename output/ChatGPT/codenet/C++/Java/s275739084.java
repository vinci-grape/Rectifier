import java.util.Scanner;

public class s275739084 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        int B = scanner.nextInt();
        int C = A + B;
        
        if (A % 3 != 0 && B % 3 != 0 && C % 3 != 0) {
            System.out.println("Impossible");
        } else {
            System.out.println("Possible");
        }
        
        scanner.close();
    }
}
import java.util.Scanner;

public class s666154520 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        for (int i = 1; i < Math.pow(10, 5); i++) {
            if (i * i > n) {
                System.out.println((i - 1) * (i - 1));
                System.exit(0);
            }
        }
    }
}
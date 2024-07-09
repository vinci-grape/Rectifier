import java.util.Scanner;

public class s698030085 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long a = scanner.nextLong();
        long b = scanner.nextLong();
        if ((a + b) % 2 == 0) {
            System.out.println((a + b) / 2);
        } else {
            System.out.println("IMPOSSIBLE");
        }
    }
}
import java.util.Scanner;

public class s475106338 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 4; i++) {
            int t = scanner.nextInt();
            int n = scanner.nextInt();
            if (t == 1) {
                System.out.println(6000 * n);
            } else if (t == 2) {
                System.out.println(4000 * n);
            } else if (t == 3) {
                System.out.println(3000 * n);
            } else if (t == 4) {
                System.out.println(2000 * n);
            }
        }
    }
}
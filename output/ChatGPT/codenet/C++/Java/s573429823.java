import java.util.Scanner;

public class s573429823 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        boolean flg = false;

        if (n < 4) {
            System.out.println("No");
        } else {
            for (int i = 0; i <= (n / 4); i++) {
                for (int j = 0; j <= (n / 7); j++) {
                    if ((i * 4 + j * 7) == n) {
                        flg = true;
                        break;
                    }
                }
                if (flg) {
                    break;
                }
            }
            if (flg) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}
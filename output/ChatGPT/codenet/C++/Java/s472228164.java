import java.util.Scanner;

public class s472228164 {
    public static String check(int x, int y) {
        if (y % 2 == 0) {
            int t = (int) (0.5 * y) - x;
            if (t >= 0 && (x - t) >= 0)
                return "Yes";
        }
        return "No";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();

        System.out.println(check(x, y));
    }
}
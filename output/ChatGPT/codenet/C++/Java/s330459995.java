import java.util.Scanner;

public class s330459995 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int W, H, x, y, r;
        W = scanner.nextInt();
        H = scanner.nextInt();
        x = scanner.nextInt();
        y = scanner.nextInt();
        r = scanner.nextInt();

        if (x - r < 0 || x + r > W || y - r < 0 || y + r > H) {
            System.out.println("No");
        } else if (x - r >= 0 && x + r <= W && y - r >= 0 && y + r <= W) {
            System.out.println("Yes");
        }

        scanner.close();
    }
}
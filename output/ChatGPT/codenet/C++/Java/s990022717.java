import java.util.Scanner;

public class s990022717 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i > k)
                sum += y;
            else
                sum += x;
        }
        System.out.println(sum);
        scanner.close();
    }
}
import java.util.Scanner;

public class s837925207 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int ans = 0;

        ans = x + x * x + x * x * x;

        System.out.println(ans);
    }
}
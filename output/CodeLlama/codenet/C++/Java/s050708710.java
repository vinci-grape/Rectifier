import java.util.Scanner;

public class s050708710 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int g = sc.nextInt();
        int b = sc.nextInt();
        int n = sc.nextInt();
        int ans = 0;
        for (int i = 0; i <= n / r; i++) {
            for (int j = 0; j <= n / g; j++) {
                int num = n - r * i - g * j;
                if (num >= 0 && num % b == 0) {
                    ans++;
                }
            }
        }
        System.out.println(ans);
    }
}
import java.util.Scanner;

public class s662673721 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = (int) 1e18;
        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i != 0) {
                continue;
            }
            int j = n / i;
            ans = Math.min(ans, i + j - 2);
        }
        System.out.println(ans);
    }
}
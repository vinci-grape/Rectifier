import java.util.Scanner;

public class s662673721 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int ans = 1000000000;

        for (int i = 1; i * i <= n; i++) {
            if (n % i!= 0) continue;
            int j = n / i;
            ans = Math.min(ans, i + j - 2);
        }

        System.out.println(ans);
    }
}
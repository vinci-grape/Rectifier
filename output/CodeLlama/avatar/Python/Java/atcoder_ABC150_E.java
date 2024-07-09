import java.util.Scanner;

public class atcoder_ABC150_E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] c = new int[n];
        for (int i = 0; i < n; i++) {
            c[i] = sc.nextInt();
        }
        int[] d = new int[n];
        for (int i = 0; i < n; i++) {
            d[i] = c[i];
        }
        Arrays.sort(d);
        Arrays.sort(c);
        Arrays.sort(d, Collections.reverseOrder());
        int a = 2 * (int) Math.pow(2, 2 * n - 2) % 1000000007;
        long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += c[i] * (a + i * (int) Math.pow(2, 2 * n - 2 - 1) % 1000000007);
            ans %= 1000000007;
        }
        System.out.println(ans);
    }
}
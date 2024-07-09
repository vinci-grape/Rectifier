import java.util.Scanner;

public class codeforces_596_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long[] r = new long[n];
        for (int i = 0; i < n; i++) {
            r[i] = scanner.nextLong();
        }
        System.out.println(maxAbsoluteDifference(r));
    }
    public static long maxAbsoluteDifference(long[] r) {
        int n = r.length;
        long ans = Math.abs(r[0]);
        for (int i = 1; i < n; i++) {
            ans += Math.abs(r[i] - r[i - 1]);
        }
        return ans;
    }
}
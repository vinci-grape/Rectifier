public class s166776347 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int ans1 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i > j) continue;
                if (a[i] > a[j]) ans1++;
                ans1 %= 1000000007;
            }
        }
        int[] count = new int[2005];
        for (int i = 0; i < n; i++) {
            count[a[i] - 1]++;
        }
        int ans2 = 0;
        int remain = n;
        for (int i = 0; i < 2005; i++) {
            remain -= count[i];
            ans2 += count[i] * remain;
        }
        int ans = 0;
        int tmp = k * (k - 1) / 2;
        tmp %= 1000000007;
        ans += ans1 * k;
        ans %= 1000000007;
        ans += tmp;
        ans %= 1000000007;
        System.out.println(ans);
    }
}
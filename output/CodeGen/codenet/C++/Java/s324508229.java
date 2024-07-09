public class s324508229 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int ii = 0;
        int a = 0;
        int b = 0;
        int[][] cnt = new int[10][10];
        for (int i = 1; i <= n; i++) {
            b = i % 10;
            a = i;
            while (a >= 10) {
                a /= 10;
            }
            cnt[a][b]++;
        }
        long long ans = 0;
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                ans += cnt[i][j] * cnt[j][i];
            }
        }
        System.out.println(ans);
    }
}
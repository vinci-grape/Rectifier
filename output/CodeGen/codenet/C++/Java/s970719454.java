public class s970719454 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] here = new int[100001];
        int[] dp1 = new int[100001];
        int[] dp2 = new int[100001];
        for (int i = 0; i < 100001; i++) {
            here[i] = dp1[i] = dp2[i] = 0;
        }
        for (int i = 0; i < m; i++) {
            int a = in.nextInt();
            here[a] = 1;
        }
        int maxi1 = 0;
        int maxi2 = 0;
        for (int i = 1; i <= n; i++) {
            if (here[i] == 1) {
                dp1[i] = dp1[i - 1] + 1;
                maxi1 = Math.max(dp1[i], maxi1);
            } else {
                dp2[i] = dp2[i - 1] + 1;
                maxi2 = Math.max(dp2[i], maxi2);
            }
        }
        if (maxi1 == 0) {
            System.out.println(maxi2);
        } else {
            System.out.println(maxi1);
        }
    }
}
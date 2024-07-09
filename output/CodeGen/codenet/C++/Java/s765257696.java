public class s765257696 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] p = new int[n];
        for (int i = 0; i < n; i++) p[i] = in.nextInt();
        int ans = 0;
        for (int i = 0; i < n - 2; i++) {
            if (p[i] > p[i+1] && p[i+1] > p[i+2]) ans++;
            if (p[i] < p[i+1] && p[i+1] < p[i+2]) ans++;
        }
        System.out.println(ans);
    }
}
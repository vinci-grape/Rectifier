public class s716198307 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int avg = 0;
        for (int i = 0; i < n; i++) {
            avg += a[i];
        }
        avg /= n;
        int s = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s > Math.abs(a[i] - avg)) {
                s = Math.abs(a[i] - avg);
                ans = i;
            }
        }
        System.out.println(ans);
    }
}
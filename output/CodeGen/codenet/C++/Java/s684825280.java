public class s684825280 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int ans = 0;
        for (int i = 0; i < a.length - k; i++) {
            ans += a[i];
        }
        System.out.println(ans);
    }
}
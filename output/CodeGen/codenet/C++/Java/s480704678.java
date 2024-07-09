public class s480704678 {
    
    public static void main(String[] args) {
        
        int n;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        int[] a = new int[n];
        int[] acc = new int[n + 1];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
            acc[i + 1] = acc[i] + a[i];
            acc[i + 1] %= 1000000007;
        }
        long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += a[i] % 1000000007 * (1000000007 + acc[n] - acc[i + 1]) % 1000000007;
            ans %= 1000000007;
        }
        System.out.println(ans);
    }
}
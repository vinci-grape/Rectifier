public class s790754864 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        int R = N - K;
        int mod = (int) (1e9 + 7);
        
        for (int i = 1; i <= K; i++) {
            int ans;
            if (N - K + 1 < i) {
                ans = 0;
            } else {
                ans = fact(R + 1, i) * fact(K - 1, i - 1);
            }
            System.out.println(ans % mod);
        }
    }
    
    public static int fact(int n, int r) {
        int result = 1;
        for (int i = 0; i < r; i++) {
            result *= (n - i);
            result /= (i + 1);
        }
        return result;
    }
}
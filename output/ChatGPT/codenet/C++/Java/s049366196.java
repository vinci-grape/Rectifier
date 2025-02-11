import java.util.*;

public class s049366196 {
    
    static boolean isPrime(long x) {
        for (long i = 2; i*i <= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        
        long ans = 1;
        for (int i = 2; i <= N; i++) {
            if (isPrime((long)i)) {
                int NN = N;
                int cnt = 0;
                while (NN > 0) {
                    cnt += NN/i;
                    NN /= i;
                }
                ans *= cnt+1;
                ans %= 1000000007;
            }
        }
        
        System.out.println(ans);
    }
}
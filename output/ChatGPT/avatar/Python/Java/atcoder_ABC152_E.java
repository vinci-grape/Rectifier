import java.util.Scanner;

public class atcoder_ABC152_E {
    public static long gcd(long a, long b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    public static long lcm(long a, long b) {
        return (a * b) / gcd(a, b);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int MOD = (int) (1e9 + 7);
        
        int N = scanner.nextInt();
        long[] A = new long[N];
        for (int i = 0; i < N; i++) {
            A[i] = scanner.nextLong();
        }
        
        long _lcm = 1;
        for (long a : A) {
            _lcm = lcm(_lcm, a);
        }
        
        long ans = (_lcm * sumInverse(A, MOD)) % MOD;
        System.out.println(ans);
    }
    
    public static long sumInverse(long[] A, int MOD) {
        long sum = 0;
        for (long s : A) {
            sum += pow(s, MOD - 2, MOD);
        }
        return sum % MOD;
    }
    
    public static long pow(long base, long exponent, int MOD) {
        long result = 1;
        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            exponent /= 2;
        }
        return result;
    }
}
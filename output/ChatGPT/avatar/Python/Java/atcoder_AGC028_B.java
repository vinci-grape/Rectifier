import java.util.Scanner;

public class atcoder_AGC028_B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long MOD = (long) Math.pow(10, 9) + 7;
        int N = Integer.parseInt(input.nextLine());
        int M = (int) Math.pow(10, 6);
        long[] A = new long[N];
        
        String[] arr = input.nextLine().split(" ");
        for (int i = 0; i < N; i++) {
            A[i] = Long.parseLong(arr[i]);
        }
        
        int Nsq = (int) Math.pow(10, 3);
        long[][] fact = new long[Nsq][Nsq];
        fact[0][0] = 1;
        
        for (int n = 1; n < Nsq; n++) {
            for (int i = 0; i < Nsq; i++) {
                fact[i][n] = fact[i][n-1] * fact[i][n];
                fact[i][n] %= MOD;
            }
        }
        
        for (int n = 1; n < Nsq; n++) {
            for (int i = 0; i < Nsq; i++) {
                fact[n][i] = fact[n-1][Nsq-1] * fact[n][i];
                fact[n][i] %= MOD;
            }
        }
        
        long[] flatFact = new long[M];
        int index = 0;
        for (int i = 0; i < Nsq; i++) {
            for (int j = 0; j < Nsq; j++) {
                flatFact[index++] = fact[i][j];
            }
        }
        
        int[] j = new int[N];
        for (int i = 0; i < N; i++) {
            j[i] = i;
        }
        
        long[] inv = new long[N];
        for (int i = 0; i < N; i++) {
            inv[i] = modPow(i+1, MOD-2, MOD);
        }
        
        long[] cumSumInv = new long[N];
        cumSumInv[0] = inv[0];
        for (int i = 1; i < N; i++) {
            cumSumInv[i] = (cumSumInv[i-1] + inv[i]) % MOD;
        }
        
        long[] temp = new long[N];
        for (int i = 0; i < N; i++) {
            temp[i] = cumSumInv[j[i]] + cumSumInv[N-1-j[i]] - 1;
            temp[i] %= MOD;
        }
        
        long ans = 0;
        for (int i = 0; i < N; i++) {
            ans += (A[i] * temp[i]) % MOD;
            ans %= MOD;
        }
        
        ans *= flatFact[N];
        ans %= MOD;
        
        System.out.println(ans);
    }
    
    public static long modPow(long base, long exponent, long modulus) {
        if (modulus == 1) return 0;
        long result = 1;
        base %= modulus;
        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result = (result * base) % modulus;
            }
            exponent >>= 1;
            base = (base * base) % modulus;
        }
        return result;
    }
}
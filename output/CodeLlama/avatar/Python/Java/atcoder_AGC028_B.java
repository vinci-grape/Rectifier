import java.io.*;
import java.util.*;
import java.math.*;
import java.util.stream.*;

public class atcoder_AGC028_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = 1000000;
        long[] A = new long[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextLong();
        }
        int Nsq = 1000;
        long[] fact = new long[Nsq * Nsq];
        fact[0] = 1;
        for (int n = 1; n < Nsq; n++) {
            for (int i = 0; i < Nsq; i++) {
                fact[n * Nsq + i] = (fact[n * Nsq + i] + fact[n * Nsq + i - 1]) % M;
            }
        }
        for (int n = 1; n < Nsq; n++) {
            for (int i = 0; i < Nsq; i++) {
                fact[n] = (fact[n] + fact[n - 1] * fact[Nsq * Nsq + i]) % M;
            }
        }
        long[] j = IntStream.range(0, N).mapToLong(i -> i).toArray();
        long[] inv = IntStream.range(0, N).mapToLong(i -> (long) Math.pow(i + 1, M - 2, M)).toArray();
        long[] temp = new long[N];
        for (int i = 0; i < N; i++) {
            temp[i] = (inv[i] + inv[N - 1 - i] - 1) % M;
        }
        long ans = IntStream.range(0, N).mapToLong(i -> (A[i] * temp[i]) % M).sum() % M;
        ans *= fact[N];
        ans %= M;
        System.out.println(ans);
    }
}
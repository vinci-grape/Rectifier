import java.util.*;

public class atcoder_ABC105_D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int M = in.nextInt();
        int[] A = new int[N];
        for(int A_i=0; A_i < N; A_i++){
            A[A_i] = in.nextInt();
        }
        int[] cum_remainders = new int[N+1];
        cum_remainders[0] = 0;
        for(int i=0; i < N; i++){
            cum_remainders[i+1] = (cum_remainders[i] + A[i]) % M;
        }
        long[] remainder_counts = new long[M];
        for(int i=0; i < M; i++){
            remainder_counts[i] = 0;
        }
        for(int i=0; i < N; i++){
            remainder_counts[cum_remainders[i+1]]++;
        }
        long combinations = 0;
        for(int i=0; i < M; i++){
            combinations += (long) remainder_counts[i] * (remainder_counts[i] - 1) / 2;
        }
        System.out.println(combinations);
    }
}
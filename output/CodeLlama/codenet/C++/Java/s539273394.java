import java.util.*;
public class s539273394 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] innsuu = new int[11];
        int[][] A = new int[N+1][11];
        int[] prime_num = new int[1001];
        long result = 1;
        for (int i = 0; i <= 1000; ++i) {
            prime_num[i] = 0;
        }
        for (int current_num = 2; current_num <= N; ++current_num) {
            int[] kekka = new int[2];
            for (int i = 0; i < 1001; ++i) {
                if (i % current_num == 0) {
                    kekka[0]++;
                    kekka[1] = i / current_num;
                }
            }
            for (int i = 0; i < 1001; ++i) {
                if (i % kekka[1] == 0) {
                    prime_num[i]++;
                }
            }
        }
        for (int current_num = 2; current_num <= N; ++current_num) {
            for (int i = 0; i < 11; ++i) {
                innsuu[i] += A[current_num][i];
            }
        }
        for (int i = 0; i < 1001; ++i) {
            result = (result * (prime_num[i] + 1)) % 1000000007;
        }
        System.out.println(result);
    }
}
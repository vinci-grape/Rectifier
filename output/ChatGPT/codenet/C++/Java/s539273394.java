import java.util.Scanner;

public class s539273394 {
    static int[] kekka = new int[2];
    static int[] prime_or_not = new int[1001];
    static int[] prime_list = new int[1001];
    static int[] prime_num = new int[1001];
    static int prime_counter = 0;
    
    public static void sosuubunnpu() {
        for (int i = 1; i <= 1000; ++i) {
            prime_or_not[i] = 0;
        }
        for (int i = 2; i <= 1000; ++i) {
            for (int j = 2; j <= 1000/i; ++j) {
                if (prime_or_not[i] == 0) {
                    prime_or_not[i*j] = 1;
                }
            }
        }
        for (int i = 2; i <= 1000; ++i) {
            if (prime_or_not[i] == 0) {
                prime_list[prime_counter] = i;
                prime_counter += 1;
            }
        }
    }
    
    public static void innsuubunnkai(int N, int n) {
        int time = 0;
        while (true) {
            if (N % n == 0) {
                N = N / n;
                time++;
            } else {
                break;
            }
        }
        kekka[0] = time;
        kekka[1] = N;
    }
    
    public static void main(String[] args) {
        sosuubunnpu();
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] innsuu = new int[11];
        int[][] A = new int[N+1][11];
        for (int i = 0; i <= 1000; ++i) {
            prime_num[i] = 0;
        }
        long result = 1;
        for (int current_num = 2; current_num <= N; ++current_num) {
            kekka[1] = current_num;
            for (int i = 0; i < prime_counter; ++i) {
                innsuubunnkai(kekka[1], prime_list[i]);
                prime_num[i] += kekka[0];
            }
        }
        for (int current_num = 2; current_num <= N; ++current_num) {
            for (int i = 0; i < 11; ++i) {
                innsuu[i] += A[current_num][i];
            }
        }
        for (int i = 0; i < prime_counter; ++i) {
            result = (result * (prime_num[i] + 1)) % 1000000007;
        }
        System.out.println(result);
    }
}
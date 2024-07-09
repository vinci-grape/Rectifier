import java.util.Scanner;

public class atcoder_AGC028_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        String S = sc.next();
        String T = sc.next();
        char[] list_S = S.toCharArray();
        char[] list_T = T.toCharArray();
        int[] Number_i = new int[N];
        for (int i = 0; i < N; i++) {
            Number_i[i] = i;
        }
        int[] Number_iMN = new int[N];
        for (int i = 0; i < N; i++) {
            Number_iMN[i] = i * M / N;
        }
        int[] Number_j = new int[M];
        for (int j = 0; j < M; j++) {
            Number_j[j] = j;
        }
        int[] Kaburi_j = new int[M];
        for (int j = 0; j < M; j++) {
            Kaburi_j[j] = Number_iMN[j];
        }
        int[] Kaburi_i = new int[M];
        for (int j = 0; j < M; j++) {
            Kaburi_i[j] = Number_j[j] * N / M;
        }
        int counter = 0;
        int Flag = 0;
        int Kaburi_Size = M;
        while (counter <= Kaburi_Size - 1) {
            if (list_S[Kaburi_i[counter]] == list_T[Kaburi_j[counter]]) {
                pass
            } else {
                Flag = 1;
                break;
            }
            counter += 1;
        }
        if (Flag == 1) {
            System.out.println(-1);
        } else {
            System.out.println(N * M / gcd(N, M));
        }
    }

    public static int gcd(int a, int b) {
        while (b > 0) {
            a = b;
            b = a % b;
        }
        return a;
    }
}
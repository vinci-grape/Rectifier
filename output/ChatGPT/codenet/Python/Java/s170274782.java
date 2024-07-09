import java.util.Scanner;

public class s170274782 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[][] A = new int[2][N];

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < N; j++) {
                A[i][j] = scanner.nextInt();
            }
        }

        int[] ans = new int[N];
        int count;

        for (int i = 0; i < N; i++) {
            int[] baselis = A[0];
            int[] groundlis = A[1];
            count = 0;

            for (int j = 0; j <= i; j++) {
                count += baselis[j];
            }

            for (int j = i; j < N; j++) {
                count += groundlis[j];
            }

            ans[i] = count;
        }

        int max = Integer.MIN_VALUE;
        for (int i = 0; i < N; i++) {
            if (ans[i] > max) {
                max = ans[i];
            }
        }

        System.out.println(max);
    }
}
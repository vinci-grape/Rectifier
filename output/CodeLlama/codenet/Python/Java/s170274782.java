import java.util.Scanner;

public class s170274782 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[][] A = new int[2][N];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < N; j++) {
                A[i][j] = sc.nextInt();
            }
        }
        int[] ans = new int[N];
        int count = 0;
        for (int i = 0; i < N; i++) {
            count = 0;
            for (int j = 0; j <= i; j++) {
                count += A[0][j];
            }
            for (int j = i; j < N; j++) {
                count += A[1][j];
            }
            ans[i] = count;
        }
        int max = 0;
        for (int i = 0; i < N; i++) {
            if (max < ans[i]) {
                max = ans[i];
            }
        }
        System.out.println(max);
    }
}
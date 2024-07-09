import java.util.*;

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
        for (int i = 0; i < N; i++) {
            int baselis = A[0][i];
            int groundlis = A[1][i];
            int count = 0;
            count = count + sum(baselis[0:i+1]) + sum(groundlis[i:N+1]);
            ans[i] = count;
        }
        System.out.println(max(ans));
    }

    public static int sum(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    public static int max(int[] arr) {
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        return max;
    }
}
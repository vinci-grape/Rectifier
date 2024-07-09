import java.util.*;

public class s200092246 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] ans = new int[2];
        for (int i = 1; i <= N; i++) {
            if (sum(i, N) < N) {
                continue;
            } else {
                ans[0] = i - 1;
                ans[1] = sum(i, N) - N;
                break;
            }
        }
        for (int i = ans[0] + 1; i <= ans[1]; i++) {
            System.out.println(i);
        }
    }

    public static int sum(int n, int m) {
        int sum = 0;
        for (int i = n; i <= m; i++) {
            sum += i;
        }
        return sum;
    }
}
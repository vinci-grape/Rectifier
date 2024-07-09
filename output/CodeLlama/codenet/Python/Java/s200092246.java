import java.util.*;

public class s200092246 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] ans = new int[2];
        for (int i = 1; i <= n; i++) {
            if (sum(i) < n) {
                continue;
            } else {
                ans[0] = i - 1;
                ans[1] = sum(i) - n;
                break;
            }
        }
        for (int i = 0; i <= ans[0]; i++) {
            if (i + 1 != ans[1]) {
                System.out.println(i + 1);
            }
        }
    }

    public static int sum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }
}
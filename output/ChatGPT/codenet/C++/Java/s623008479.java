import java.util.Arrays;
import java.util.Scanner;

public class s623008479 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] l = new int[n];
        for (int i = 0; i < n; i++) {
            l[i] = scanner.nextInt();
        }

        Arrays.sort(l);

        int ans = 0;
        for (int i = 0; i < k; i++) {
            ans += l[n - 1 - i];
        }
        System.out.println(ans);
    }
}
import java.util.*;

public class codeforces_651_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if (n < 2) return;
        int[] left = new int[n];
        int[] right = new int[n];
        int max = 0;
        for (int i = 0; i < n; i++) {
            left[i] = scanner.nextInt() - scanner.nextInt() + 1;
            right[i] = scanner.nextInt() - scanner.nextInt() + 1;
            max = Math.max(max, left[i] + right[i]);
        }
        System.out.println(max);
    }
}
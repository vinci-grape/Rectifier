import java.util.*;

public class codeforces_387_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] round_complexity = new int[n];
        int[] george_complexity = new int[m];
        for (int i = 0; i < n; i++) {
            round_complexity[i] = in.nextInt();
        }
        for (int j = 0; j < m; j++) {
            george_complexity[j] = in.nextInt();
        }
        int i = 0, j = 0;
        while (i < n && j < m) {
            i += 1 * ((round_complexity[i] <= george_complexity[j]) ? 1 : 0);
            j += 1;
        }
        System.out.println(n - i);
    }
}
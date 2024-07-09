import java.util.*;
public class codeforces_67_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] M = new int[n];
        for (int i = 0; i < n; i++) {
            M[i] = sc.nextInt();
        }
        int m = 0;
        for (int j = 0; j < n; j++) {
            for (int p = 0; p < n; p++) {
                if (M[p] == 0) {
                    System.out.print(p + 1 + " ");
                    break;
                }
            }
            for (int l = p + 1 - k; l < p; l++) {
                M[l]--;
            }
            M[p]--;
        }
    }
}
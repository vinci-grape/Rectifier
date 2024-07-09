import java.util.*;

public class codeforces_313_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.nextLine();
        String[] L = sc.nextLine().split(" ");
        int[] ans = findSubstring(S, L);
        System.out.println(Arrays.toString(ans));
    }
    public static int[] findSubstring(String S, String[] L) {
        int[] ans = new int[L.length];
        int n = L.length;
        int m = L[0].length();
        int[] a = new int[m];
        for (int i = 0; i < m; i++) {
            a[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            a[0] = 0;
            for (int j = 0; j < m; j++) {
                if (S.charAt(i + j) == L[j].charAt(0)) {
                    a[j]++;
                }
            }
            for (int j = 1; j < m; j++) {
                a[j] = a[j - 1] + a[j];
            }
            for (int j = 0; j < m; j++) {
                if (a[j] >= L[j].length()) {
                    ans[i] = j + 1;
                    a[j] = 0;
                }
            }
        }
        return ans;
    }
}
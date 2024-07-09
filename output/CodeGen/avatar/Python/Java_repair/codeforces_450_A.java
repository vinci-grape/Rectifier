import java.util.*;

public class codeforces_450_A {
    public int findMaxForm(int[] str, int m) {
        int n = str.length;
        int[] l = new int[n];
        for (int i = 0; i < n; i++) {
            if (str[i] % m == 0) {
                l[i] = str[i] / m;
            } else {
                l[i] = str[i] / m + 1;
            }
        }
        int max = Integer.MIN_VALUE;
        int ind = 0;
        for (int i = 0; i < n; i++) {
            if (l[i] > max) {
                max = l[i];
                ind = i;
            }
        }
        return ind + 1;
    }
}
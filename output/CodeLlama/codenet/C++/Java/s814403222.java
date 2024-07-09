import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
public class s814403222 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextInt()) {
            int n = sc.nextInt();
            if (n == 0) {
                break;
            }
            int[][] d = new int[33][];
            for (int i = 0; i < 33; i++) {
                d[i] = new int[n];
            }
            String[] s = new String[n];
            int[] m = new int[n];
            for (int i = 0; i < n; i++) {
                s[i] = sc.next();
                m[i] = sc.nextInt();
                for (int j = 0; j < m[i]; j++) {
                    int a = sc.nextInt();
                    d[a][j] = i;
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m[i]; j++) {
                    for (int k = 0; k < m[d[i][j]]; k++) {
                        m[d[i][j]]--;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m[i]; j++) {
                    m[d[i][j]]++;
                }
            }
            int[][] p = new int[n][2];
            for (int i = 0; i < n; i++) {
                p[i][0] = m[i];
                p[i][1] = i;
            }
            Comparator<int[]> cmp = new Comparator<int[]>() {
                public int compare(int[] a, int[] b) {
                    if (a[0] == b[0]) {
                        return a[1] - b[1];
                    } else {
                        return b[0] - a[0];
                    }
                }
            };
            Arrays.sort(p, cmp);
            System.out.println(p[0][0] + " " + s[p[0][1]]);
        }
    }
}
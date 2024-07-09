import java.util.*;
public class codeforces_268_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[][] q = new String[n][n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            String[] a = sc.next().split(" ");
            for (int j = 0; j < n; j++) {
                q[i][j] = a[j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if (q[i][j].equals(q[k][j])) {
                        continue;
                    }
                    if (q[i][j].equals(q[i][k])) {
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
    }
}
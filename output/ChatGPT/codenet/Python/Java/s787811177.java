import java.util.*;
import java.lang.*;

public class s787811177 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] ls = new int[n][2];

        for (int i = 0; i < n; i++) {
            ls[i][0] = sc.nextInt();
            ls[i][1] = sc.nextInt();
        }

        Arrays.sort(ls, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                return Integer.compare(b[0] + b[1], a[0] + a[1]);
            }
        });

        int taka = 0;
        int aoki = 0;

        for (int i = 0; i < ls.length; i++) {
            if (i % 2 == 0) {
                taka += ls[i][0];
            } else {
                aoki += ls[i][1];
            }
        }

        System.out.println(taka - aoki);
    }
}
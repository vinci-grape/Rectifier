import java.util.*;

public class s787811177 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] ls = new int[n][2];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                ls[i][j] = sc.nextInt();
            }
        }
        Arrays.sort(ls, new Comparator<int[]>() {
            @Override
            public int compare(int[] o1, int[] o2) {
                return o2[0] + o2[1] - o1[0] - o1[1];
            }
        });
        int taka = 0;
        int aoki = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                taka += ls[i][0];
            } else {
                aoki += ls[i][1];
            }
        }
        System.out.println(taka - aoki);
    }
}
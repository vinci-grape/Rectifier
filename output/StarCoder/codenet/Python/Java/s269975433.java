import java.util.*;

public class s269975433 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int Q = sc.nextInt();
        int[][] Q_groups = new int[Q][4];
        for (int i = 0; i < Q; i++) {
            for (int j = 0; j < 4; j++) {
                Q_groups[i][j] = sc.nextInt();
            }
        }
        int max_score = 0;
        for (int[] p : combinationsWithReplacement(IntStream.range(1, M + 1).toArray(), N)) {
            int temp_score = 0;
            for (int[] q : Q_groups) {
                if (p[q[1] - 1] - p[q[0] - 1] == q[2]) {
                    temp_score += q[3];
                }
            }
            max_score = Math.max(max_score, temp_score);
        }
        System.out.println(max_score);
    }
}
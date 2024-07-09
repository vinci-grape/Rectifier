import java.util.Scanner;

public class s269975433 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        int Q = scanner.nextInt();
        
        int[][] Q_groups = new int[Q][4];
        for (int i = 0; i < Q; i++) {
            for (int j = 0; j < 4; j++) {
                Q_groups[i][j] = scanner.nextInt();
            }
        }
        
        int max_score = 0;
        for (int i = 1; i <= M; i++) {
            for (int j = 1; j <= M; j++) {
                for (int k = 1; k <= M; k++) {
                    for (int l = 1; l <= M; l++) {
                        int[] p = new int[N];
                        p[0] = i;
                        p[1] = j;
                        p[2] = k;
                        p[3] = l;
                        
                        int temp_score = 0;
                        for (int[] q : Q_groups) {
                            if (p[q[1] - 1] - p[q[0] - 1] == q[2]) {
                                temp_score += q[3];
                            }
                        }
                        
                        max_score = Math.max(max_score, temp_score);
                    }
                }
            }
        }
        
        System.out.println(max_score);
    }
}
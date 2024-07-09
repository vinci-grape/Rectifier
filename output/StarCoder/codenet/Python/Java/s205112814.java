import java.util.*;

public class s205112814 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] gate_cond = new int[m][2];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < 2; j++) {
                gate_cond[i][j] = sc.nextInt();
            }
        }
        int max_under_th = 0;
        int min_upper_th = 1000000000;
        for (int i = 0; i < m; i++) {
            if (gate_cond[i][0] > max_under_th) {
                max_under_th = gate_cond[i][0];
            }
            if (gate_cond[i][1] < min_upper_th) {
                min_upper_th = gate_cond[i][1];
            }
        }
        if (min_upper_th - max_under_th >= 0) {
            System.out.println(min_upper_th - max_under_th + 1);
        } else {
            System.out.println(0);
        }
    }
}
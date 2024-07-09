import java.util.*;

public class s067092519 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[][][] m = new int[10][3][10];
        String line = "";
        for (int i = 0; i < N; i++) {
            String[] n = sc.next().split(" ");
            int b = Integer.parseInt(n[0]);
            int f = Integer.parseInt(n[1]);
            int r = Integer.parseInt(n[2]);
            int v = Integer.parseInt(n[3]);
            m[b - 1][f - 1][r - 1] += v;
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 10; k++) {
                    line += " " + m[i][j][k];
                }
                System.out.println(line);
                line = "";
            }
            if (i < 3) {
                System.out.println("####################");
            }
        }
    }
}
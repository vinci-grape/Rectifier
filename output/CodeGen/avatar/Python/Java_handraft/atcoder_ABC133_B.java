import java.util.*;

public class atcoder_ABC133_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int d = scanner.nextInt();
        
        int[][] points = new int[n][d];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < d; j++) {
                points[i][j] = scanner.nextInt();
            }
        }
        System.out.println(numberOfBoomerangs(points));
    }
    public static int numberOfBoomerangs(int[][] points) {
        int n = points.length;
        int d = points[0].length;
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                double tmp = 0.0;
                for (int k = 0; k < d; k++) {
                    tmp += Math.pow(points[i][k] - points[j][k], 2);
                }
                if (tmp == 0) {
                    count++;
                }
            }
        }
        return count;
    }
}
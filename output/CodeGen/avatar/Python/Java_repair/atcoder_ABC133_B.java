import java.util.*;

public class atcoder_ABC133_B {
    public int numberOfBoomerangs(int[][] points) {
        int n = points.length;
        int d = points[0].length;
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int tmp = 0;
                for (int k = 0; k < d; k++) {
                    tmp += (points[i][k] - points[j][k]) * (points[i][k] - points[j][k]);
                }
                if (tmp == 0) {
                    count++;
                }
            }
        }
        return count;
    }
}
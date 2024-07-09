public class s749244504 {
    public int shortestPathLength(int[][] costs) {
        int[][] d = new int[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == 1 || j == 1) {
                    d[i][j] = Integer.MAX_VALUE;
                    continue;
                }
                d[i][j] = Integer.MAX_VALUE;
                for (int k = 0; k < 10; k++) {
                    if (k == 1) {
                        continue;
                    }
                    d[i][j] = Math.min(d[i][j], d[i][k] + d[k][j] + costs[i][k] + costs[k][j]);
                }
            }
        }
        int s = 0;
        for (int i = 0; i < 10; i++) {
            if (i == 1) {
                continue;
            }
            s += d[i][1];
        }
        return s;
    }
}
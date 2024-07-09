public class s663509070 {
    public int findCircleNum(int[][] M) {
        int N = M.length;
        int[] dist = new int[N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                dist[i] += (i - j) * (i - j);
            }
        }
        int c = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (dist[i] + dist[j] == dist[0]) {
                    c++;
                }
            }
        }
        return c;
    }
}

'''
public class s422352362 {
    public int minDistance(int[] words1, int[] words2) {
        int n1 = words1.length;
        int n2 = words2.length;
        int[] pre = new int[n1 + 1];
        int[] last = new int[n1 + 1];
        int[] d = new int[n1 + 1];
        for (int i = 0; i <= n1; i++) {
            pre[i] = i;
        }
        for (int i = 0; i <= n2; i++) {
            last[i] = i;
        }
        for (int i = 1; i <= n1; i++) {
            d[i] = words1[i - 1];
        }
        for (int i = 1; i <= n2; i++) {
            d[i] = words2[i - 1] + d[i];
        }
        for (int i = 1; i <= n1; i++) {
            for (int j = 1; j <= n2; j++) {
                d[i] = min(d[i], d[i - 1] + d[j] - last[j]);
                d[i] = min(d[i], d[i - 1] + d[j] - pre[i]);
            }
        }
        return d[n1];
    }
}
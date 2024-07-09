public class s233116196 {
    public int findMaxLength(int[] A) {
        int n = A.length;
        int[] col = new int[n + 1];
        int[] que = new int[n + 1];
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            col[i] = -1;
            que[i] = i;
        }
        for (int i = 0; i < n; i++) {
            if (col[i] < 0) {
                col[i] = cnt;
                que[cnt++] = i;
            }
            for (int j = 0; j < n; j++) {
                if (col[j] < 0) {
                    col[j] = cnt;
                    que[cnt++] = j;
                }
                if (A[i] == A[j]) {
                    if (col[i] == col[j]) {
                        que[col[i]] = que[col[j]];
                    } else {
                        que[col[i]] = que[col[j]];
                        que[col[j]] = que[col[i]];
                    }
                }
            }
        }
        int max = 0;
        for (int i = 0; i < cnt; i++) {
            max = Math.max(max, que[i]);
        }
        return max;
    }
}

'''
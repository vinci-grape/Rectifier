public class s315467749 {
    public int findMinStep(int[] stones, int[] queries) {
        int n = stones.length;
        int[] S = stones;
        int[] T = queries;
        int[] ans = new int[T.length];
        for (int i = 0; i < T.length; i++) {
            if (T[i] == S[n-1] || T[i] == S[0]) {
                ans[i] = 1;
            } else {
                int left = 0;
                int right = n-1;
                while (right-left > 1) {
                    int mid = (left+right) / 2;
                    if (S[mid] == T[i]) {
                        ans[i] = 1;
                        break;
                    } else if (S[mid] < T[i]) {
                        left = mid;
                    } else {
                        right = mid;
                    }
                }
            }
        }
        return ans[0];
    }
}
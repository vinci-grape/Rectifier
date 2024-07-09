public class s002779582 {
    public int hIndex(int[] citations) {
        int n = citations.length;
        int[] hs = new int[n];
        for (int i = 0; i < n; i++) {
            hs[i] = citations[i];
        }
        Arrays.sort(hs);
        int ans = 0;
        int maxH = 0;
        for (int i = 0; i < n; i++) {
            if (maxH <= hs[i]) {
                ans++;
                maxH = hs[i];
            }
        }
        return ans;
    }
}
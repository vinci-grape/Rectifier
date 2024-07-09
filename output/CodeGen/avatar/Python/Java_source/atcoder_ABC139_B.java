public class atcoder_ABC139_B {
    public int hIndex(int[] citations) {
        int n = citations.length;
        int[] h = new int[n + 1];
        for (int i = 0; i < n; i++) {
            h[citations[i]]++;
        }
        int i = 0;
        while (i < n && h[i] == 0) {
            i++;
        }
        return i;
    }
}
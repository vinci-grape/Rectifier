public class s895229833 {
    public int[] hIndex(int[] citations) {
        int[] res = new int[citations.length];
        int count = 0;
        for (int i = 0; i < citations.length; i++) {
            if (citations[i] >= count) {
                count = citations[i] + 1;
                res[i] = count;
            } else {
                res[i] = count;
            }
        }
        return res;
    }
}
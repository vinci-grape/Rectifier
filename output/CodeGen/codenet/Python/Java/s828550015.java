public class s828550015 {
    public int findMin(int[] nums) {
        int[] pq = new int[nums.length];
        int[] r = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            pq[i] = nums[i];
            r[i] = i;
        }
        Arrays.sort(pq, Collections.reverseOrder());
        Arrays.sort(r, Collections.reverseOrder());
        int pqlen = pq.length;
        int rlen = r.length;
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < pqlen && i < rlen; i++) {
            if (pq[i] < r[i]) {
                pq[i] = r[i];
            }
            min = Math.min(min, pq[i]);
        }
        return min;
    }
}
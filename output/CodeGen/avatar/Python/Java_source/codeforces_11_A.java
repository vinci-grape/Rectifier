public class codeforces_11_A {
    public int findMinDifference(int[] timePoints) {
        int n = timePoints.length;
        int[] diff = new int[n];
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            diff[i] = timePoints[i] - timePoints[i + 1];
            min = Math.min(min, diff[i]);
        }
        return min;
    }
}
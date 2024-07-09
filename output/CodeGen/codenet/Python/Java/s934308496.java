public class s934308496 {
    public int findMinDifference(int[] timePoints) {
        Arrays.sort(timePoints);
        int n = timePoints.length;
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            min = Math.min(min, timePoints[i] - timePoints[i - 1]);
        }
        return min;
    }
}
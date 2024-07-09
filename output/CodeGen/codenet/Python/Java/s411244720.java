public class s411244720 {
    public int findMinDifference(int[] timePoints) {
        Set<Integer> set = new HashSet<>();
        for (int i = 0; i < timePoints.length; i++) {
            set.add(timePoints[i]);
        }
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < timePoints.length; i++) {
            int diff = 0;
            for (int j = i + 1; j < timePoints.length; j++) {
                diff += Math.abs(timePoints[i] - timePoints[j]);
            }
            min = Math.min(min, diff);
        }
        return min;
    }
}
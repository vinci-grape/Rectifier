public class atcoder_ABC125_B {
    public int findMinDifference(String time1, String time2) {
        int[] time1Arr = new int[time1.length()];
        int[] time2Arr = new int[time2.length()];
        for (int i = 0; i < time1.length(); i++) {
            time1Arr[i] = Integer.parseInt(time1.charAt(i) + "");
        }
        for (int i = 0; i < time2.length(); i++) {
            time2Arr[i] = Integer.parseInt(time2.charAt(i) + "");
        }
        int[] diff = new int[time1Arr.length];
        for (int i = 0; i < time1Arr.length; i++) {
            diff[i] = time1Arr[i] - time2Arr[i];
        }
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < diff.length; i++) {
            if (diff[i] < min) {
                min = diff[i];
            }
        }
        return min;
    }
}
import java.util.*;

public class atcoder_ABC125_B {
    public int findMinDifference(String time1, String time2) {
        String[] time1Arr = new String[time1.length()];
        String[] time2Arr = new String[time2.length()];
        for (int i = 0; i < time1.length(); i++) {
            time1Arr[i] = time1.charAt(i) + "";
        }
        for (int i = 0; i < time2.length(); i++) {
            time2Arr[i] = time2.charAt(i) + "";
        }
        String[] diff = new String[time1Arr.length];
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
import java.util.*;

public class atcoder_ABC124_C {
    public int findMinDifference(String[] time) {
        int[] even = new int[2];
        int[] odd = new int[2];
        for (int i = 0; i < time.length; i++) {
            if (time[i].charAt(0) == '0') {
                even[0]++;
            } else {
                odd[1]++;
            }
        }
        int min = time.length - (even[0] + odd[1]);
        return min;
    }
}
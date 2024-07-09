import java.util.*;

public class atcoder_ARC062_B {
    public int findMaxForm(String[] strs) {
        int n = strs.length;
        int[] num_g = new int[n];
        int[] num_p = new int[n];
        int score = 0;
        for (int i = 0; i < n; i++) {
            if (strs[i].equals("g")) {
                num_g[i]++;
                if (num_g[i] > num_p[i]) {
                    score++;
                    num_p[i]++;
                } else {
                    score = score;
                    num_g[i]++;
                }
            } else {
                num_g[i]--;
                if (num_g[i] < num_p[i]) {
                    score--;
                    num_g[i]--;
                } else {
                    score = score;
                    num_p[i]--;
                }
            }
        }
        return score;
    }
}
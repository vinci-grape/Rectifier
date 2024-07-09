import java.util.*;

public class atcoder_ABC111_C {
    public int findMinDifference(List<List<Integer>> timePoints) {
        int[] cnta = new int[100002 + 1];
        int[] cntb = new int[100002 + 1];
        int vala = 0;
        int vala1 = 0;
        int maxCnta = 0;
        int maxCnta1 = 0;
        for (List<Integer> timePoint : timePoints) {
            for (int i : timePoint) {
                cnta[i]++;
            }
        }
        for (int i = 0; i < cnta.length; i++) {
            if (maxCnta < cnta[i]) {
                vala = i;
                maxCnta = cnta[i];
            }
            if (maxCnta1 < cnta[i] && vala!= i) {
                maxCnta1 = cnta[i];
                vala1 = i;
            }
        }
        int valb = 0;
        int valb1 = 0;
        int maxCntb = 0;
        int maxCntb1 = 0;
        for (List<Integer> timePoint : timePoints) {
            for (int i : timePoint) {
                cntb[i]++;
            }
        }
        for (int i = 0; i < cntb.length; i++) {
            if (maxCntb < cntb[i]) {
                valb = i;
                maxCntb = cntb[i];
            }
            if (maxCntb1 < cntb[i] && valb!= i) {
                maxCntb1 = cntb[i];
                valb1 = i;
            }
        }
        if (valb!= vala) {
            int res = 0;
            for (int i = 0; i < cnta.length; i++) {
                if (i!= vala) {
                    res += 1;
                }
            }
            for (int i = 0; i < cntb.length; i++) {
                if (i!
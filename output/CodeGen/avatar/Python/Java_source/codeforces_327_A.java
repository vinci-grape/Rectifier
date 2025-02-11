public class codeforces_327_A {
    public int findMaxLength(String s) {
        int n = s.length();
        if (n == 0) return 0;
        int[] indices = new int[n];
        int max = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '0') {
                indices[i] = i;
            }
        }
        if (indices.length == 1) return n;
        for (int i = 0; i < indices.length - 1; i++) {
            for (int j = i + 1; j < indices.length; j++) {
                int diff = Math.abs(indices[i] - indices[j]);
                if (diff == 1) continue;
                int len = 2 + 2 * diff - diff;
                if (len > max) max = len;
            }
        }
        return s.replaceAll("0", "").length() + max;
    }
}
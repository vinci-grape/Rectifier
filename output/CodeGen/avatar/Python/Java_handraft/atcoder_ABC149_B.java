public class atcoder_ABC149_B {
    public int[] findContentChildren(int[] g, int[] s) {
        int[] result = new int[2];
        int[] leftOver = new int[g.length];
        int[] takahashi = new int[g.length];
        int max = 0;
        for (int i = 0; i < g.length; i++) {
            leftOver[i] = g[i] - s[i];
            takahashi[i] = Math.max(0, leftOver[i]);
            max = Math.max(max, takahashi[i]);
        }
        result[0] = max;
        result[1] = takahashi[0] + (takahashi[1] > 0? 1 : 0);
        return result;
    }
}
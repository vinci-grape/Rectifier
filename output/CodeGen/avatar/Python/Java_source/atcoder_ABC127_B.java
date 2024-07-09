public class atcoder_ABC127_B {
    public int getMoneyAmount(int r, int D, int x) {
        int[] res = new int[12];
        res[0] = 0;
        for (int i = 1; i < 12; i++) {
            res[i] = (int) Math.pow(r, i - 1) * (x + D / (1 - r)) - D / (1 - r);
        }
        return res[11];
    }
}
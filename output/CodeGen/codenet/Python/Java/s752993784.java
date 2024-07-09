public class s752993784 {
    public int findCircleNum(int[] M) {
        int[] countRemainder = new int[2019];
        int cnt = 0;
        int m = 1;
        int mod = 0;
        for (int i = 0; i < M.length; i++) {
            mod += M[i] * m;
            mod %= 2019;
            m *= 10;
            m %= 2019;
            countRemainder[mod] += 1;
        }
        countRemainder[0] += 1;
        for (int i = 0; i < 2019; i++) {
            cnt += countRemainder[i] * (countRemainder[i] - 1) / 2;
        }
        return cnt;
    }
}
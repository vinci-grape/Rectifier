public class codeforces_148_B {
    public int getNumber(int n, int k) {
        int result = 0;
        int position = k;
        while (position < n) {
            result++;
            position += k * position / n;
            position += k * (position / n) * f;
            position += k * (position / n) * (position / n);
        }
        return result;
    }
}
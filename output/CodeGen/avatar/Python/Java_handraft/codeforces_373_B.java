public class codeforces_373_B {
    public int solution(int[] A) {
        int lo = 0;
        int hi = 1e18;
        int md;
        int c;
        while (hi - lo > 1) {
            md = (lo + hi) / 2;
            c = sum(A.length + md - 1) - sum(A.length - 1);
            if (c * k <= w) lo = md;
            else hi = md;
        }
        return lo;
    }
    public int sum(int n) {
        int ret = 0;
        int pw = 10;
        int len = 1;
        while (1 == 1) {
            int cur = min(pw - 1, n);
            int prev = pw / 10;
            ret += (cur - prev + 1) * len;
            if (pw - 1 >= n) break;
            len += 1;
            pw *= 10;
        }
        return ret;
    }
}
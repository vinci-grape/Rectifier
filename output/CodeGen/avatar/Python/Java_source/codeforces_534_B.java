public class codeforces_534_B {
    public int distanceBetweenBusStops(int v1, int v2, int t, int d) {
        int a = 1;
        int v = v1;
        int distance = 0;
        for (int i = 0; i < t; i++) {
            if (v - v2 > (t - i - 1) * d) {
                a *= -1;
                v = (t - i - 1) * d + v2;
            }
            distance += v;
            v += a * d;
        }
        return distance;
    }
}
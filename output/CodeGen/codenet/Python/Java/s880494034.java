public class s880494034 {
    public int minTotalDistance(int[] x) {
        int m = 9999999999;
        for (int i = 1; i < 101; i++) {
            int c = 0;
            for (int j = 0; j < x.length; j++) {
                c += (x[j] - i) * (x[j] - i);
            }
            if (m > c) {
                m = c;
            }
        }
        return m;
    }
}
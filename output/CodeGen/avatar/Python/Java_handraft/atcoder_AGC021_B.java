public class atcoder_AGC021_B {
    public double findRadius ( int[] x, int[] y ) {
        int N = x.length;
        int[] X = new int[N];
        int[] Y = new int[N];
        for ( int i = 0 ; i < N ; i ++ ) {
            X[i] = x[i];
            Y[i] = y[i];
        }
        Arrays.sort(X);
        Arrays.sort(Y);
        double ans = 0;
        for ( int i = 0 ; i < N ; i ++ ) {
            double[] D = new double[N];
            for ( int j = 0 ; j < N ; j ++ ) {
                if ( j!= i ) {
                    D[j] = Math.atan2(X[i] - X[j], Y[i] - Y[j]);
                }
            }
            D[i] += 2 * Math.PI;
            for ( int j = 0 ; j < N ; j ++ ) {
                if ( j!= i ) {
                    if ( D[j] - D[i] >= Math.PI ) {
                        ans += ( D[j] - D[i] ) - Math.PI;
                    }
                }
            }
        }
        return ans / ( 2 * Math.PI );
    }
}
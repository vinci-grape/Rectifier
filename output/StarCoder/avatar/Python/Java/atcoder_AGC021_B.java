import java.util.*;
import java.lang.*;
import java.io.*;
class atcoder_AGC021_B {
	public static void main ( String[] args ) {
		Scanner input = new Scanner ( System.in );
		int t = input.nextInt ( );
		for ( int c = 0; c < t; c++ ) {
			int n = input.nextInt ( );
			double[] x = new double[n];
			double[] y = new double[n];
			for ( int i = 0; i < n; i++ ) {
				x[i] = input.nextDouble ( );
				y[i] = input.nextDouble ( );
			}
			double[] d = new double[n];
			for ( int i = 0; i < n; i++ ) {
				d[i] = Math.atan2 ( y[i] - y[0], x[i] - x[0] );
			}
			Arrays.sort ( d );
			double ans = 0;
			for ( int i = 0; i < n; i++ ) {
				ans += Math.abs ( d[i] - d[(i + 1) % n] );
			}
			System.out.println ( ans / (2 * Math.PI) );
		}
	}
}
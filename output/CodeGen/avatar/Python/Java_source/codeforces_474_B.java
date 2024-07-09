import java.util.*;
import java.lang.*;
import java.io.*;

public class codeforces_474_B {
	public static void main ( String [ ] args ) {
		Scanner in = new Scanner ( System.in );
		int n = in.nextInt ( );
		int [ ] arr = new int [ n ];
		for ( int i = 0; i < n; i ++ ) {
			arr [ i ] = in.nextInt ( );
		}
		int m = in.nextInt ( );
		int [ ] arr2 = new int [ m ];
		for ( int i = 0; i < m; i ++ ) {
			arr2 [ i ] = in.nextInt ( );
		}
		int [ ] arr3 = new int [ n ];
		for ( int i = 0; i < n; i ++ ) {
			arr3 [ i ] = arr [ i ];
		}
		for ( int i = 0; i < m; i ++ ) {
			arr3 [ arr2 [ i ] - 1 ] = arr2 [ i ];
		}
		for ( int i = 0; i < n; i ++ ) {
			System.out.print ( arr3 [ i ] );
			if ( i!= n - 1 ) {
				System.out.print ( " " );
			}
		}
	}
}
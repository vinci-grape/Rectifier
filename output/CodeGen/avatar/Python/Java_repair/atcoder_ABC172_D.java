import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_ABC172_D {
	public static void main ( String [ ] args ) {
		Scanner in = new Scanner ( System.in );
		int n = in.nextInt ( );
		int ans = 0;
		for ( int i = 1 ; i <= n ; i++ ) {
			ans += i * ( n / i ) * ( n / i + 1 ) / 2;
		}
		System.out.println ( ans );
	}
}
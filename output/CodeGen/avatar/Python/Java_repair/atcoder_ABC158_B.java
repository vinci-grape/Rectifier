import java.util.*;
import java.lang.*;
import java.io.*;

public class atcoder_ABC158_B {
	public static void main ( String [ ] args ) {
		Scanner in = new Scanner ( System.in );
		int mod = 1000000007;
		int N = in.nextInt ( );
		int A = in.nextInt ( );
		int B = in.nextInt ( );
		int ans = 0;
		int rep = N / ( A + B );
		ans += rep * A;
		int res = N - rep * ( A + B );
		ans += Math.min ( res, A );
		System.out.println ( ans );
	}
}
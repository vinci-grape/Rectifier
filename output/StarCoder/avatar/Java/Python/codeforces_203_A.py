import java.io.*;import java.util.*;
public class codeforces_203_A {
	private void solve ( ) {
		int x = nextInt ( ) ;
		int t = nextInt ( ) ;
		int a = nextInt ( ) ;
		int b = nextInt ( ) ;
		int da = nextInt ( ) ;
		int db = nextInt ( ) ;
		int first ;
		int second ;
		boolean ok = false ;
		for ( int i = 0 ; i < t ; i ++ ) {
			first = a - ( da * i ) ;
			for ( int j = 0 ; j < t ; j ++ ) {
				second = b - ( db * j ) ;
				if ( second + first == x || second == x || first == x || x == 0 ) {
					ok = true ;
					break ;
				}
			}
		}
		if ( ok ) out.print ( "YES" ) ;
		else out.print ( "NO" ) ;
	}
	public static void main ( String [ ] args ) {
		new codeforces_203_A ( ).run ( ) ;
	}
	BufferedReader br ;
	StringTokenizer st ;
	PrintWriter out ;
	private void run ( ) {
		try {
			br = new BufferedReader ( new InputStreamReader ( System.in ) ) ;
			out = new PrintWriter ( System.out ) ;
			solve ( ) ;
			br.close ( ) ;
			out.close ( ) ;
		} catch ( IOException e ) {
			e.printStackTrace ( ) ;
		}
	}
	private int nextInt ( ) {
		return Integer.parseInt ( next ( ) ) ;
	}
	private String next ( ) {
		while ( st == null ||! st.hasMoreTokens ( ) ) {
			try {
				st = new StringTokenizer ( br.readLine ( ) ) ;
			} catch ( IOException e ) {
				e.printStackTrace ( ) ;
				return "END_OF_FILE" ;
			}
		}
		return st.nextToken ( ) ;
	}
}
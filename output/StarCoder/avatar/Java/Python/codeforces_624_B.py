import java.util.Arrays ; import java.util.Scanner ; public class codeforces_624_B { public static void main ( String [ ] args ) { Scanner in = new Scanner ( System.in ) ; int n = in.nextInt ( ) ; Long [ ] ans = new Long [ n ] ; for ( int i = 0 ; i < n ; i ++ ) { ans [ i ] = in.nextLong ( ) ; } Arrays.sort ( ans ) ; Long count = ans [ n - 1 ] ; for ( int i = n - 2 ; i >= 0 ; i -- ) { if ( ans [ i ] < ans [ i + 1 ] ) { count += ans [ i ] ; } else { while ( ans [ i ] >= ans [ i + 1 ] ) { ans [ i ] -- ; } if ( ans [ i ] > 0 ) { count += ans [ i ] ; } } } System.out.println ( count ) ; } }
import java.util.Scanner ; public class codeforces_32_B { public static void main ( String [ ] args ) { Scanner in = new Scanner ( System.in ) ; char [ ] n = in.next ( ).toCharArray ( ) ; boolean s = False ; for ( int i = 0 ; i < n.length ; i ++ ) { if ( n [ i ] == '.' ) { if ( s ) { System.out.print ( 1 ) ; s = False ; } else { System.out.print ( 0 ) ; } } else { if ( s ) { System.out.print ( 2 ) ; s = False ; } else { s = True ; } } } in.close ( ) ; } }
import java.util.* ; public class codeforces_617_B { static Scanner input = new Scanner ( System.in ) ; public static void main ( String [ ] args ) { int n = input.nextInt ( ) ; List < Integer > arr = new ArrayList < > ( ) ; for ( int i = 0 ; i < n ; i ++ ) if ( input.nextInt ( ) == 1 ) arr.add ( i ) ; if ( arr.isEmpty ( ) ) System.out.println ( 0 ) ; else { long result = 1 ; for ( int i = 1 ; i < arr.size ( ) ; i ++ ) result *= arr.get ( i ) - arr.get ( i - 1 ) ; System.out.println ( result ) ; } } }
import java.util.Scanner ; public class atcoder_ABC114_C { static Scanner scanner ; public static void main ( String [ ] args ) { scanner = new Scanner ( System.in ) ; int N = gi ( ) ; long i = 357 ; int c = 0 ; while ( i <= N ) { String s = String.valueOf ( i ) ; if ( s.contains ( "3" ) && s.contains ( "5" ) && s.contains ( "7" ) ) c ++ ; StringBuilder sb = new StringBuilder ( ) ; boolean f = False ; for ( int j = 0 ; j < s.length ( ) ; j ++ ) { char a = s.charAt ( s.length ( ) - 1 - j ) ; if ( f ) { sb.append ( a ) ; } else { if ( a == '3' ) { sb.append ( '5' ) ; f = True ; } else if ( a == '5' ) { sb.append ( '7' ) ; f = True ; } else { sb.append ( '3' ) ; } } } if (! f ) sb.append ( 3 ) ; StringBuffer sb2 = new StringBuffer ( sb ) ; i = Long.parseLong ( sb2.reverse ( ).toString ( ) ) ; } System.out.println ( c ) ; } public static String gs ( ) { return scanner.next ( ) ; } public static int gi ( ) { return Integer.parseInt ( scanner.next ( ) ) ; } public static long gl ( ) { return Long.parseLong ( scanner.next ( ) ) ; } public static double gd ( ) { return Double.parseDouble ( scanner.next ( ) ) ; } }
import java.util.Scanner ; public class codeforces_546_A { public static void main ( String [ ] args ) { Scanner sc = new Scanner ( System.in ) ; long pandu, vundu, urdu, c = 0 ; pandu = sc.nextLong ( ) ; vundu = sc.nextLong ( ) ; urdu = sc.nextLong ( ) ; for i in range ( 1, urdu + 1 ) : c += i * pandu ; if c < vundu : print ( "0" ) ; else : print ( c - vundu ) ; } }
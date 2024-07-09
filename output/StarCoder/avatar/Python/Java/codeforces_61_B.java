import java.util.*;
public class codeforces_61_B {
    public static void main ( String arg [ ] ) {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        for ( int i = 0 ; i < n ; i ++ ) {
            String s = sc.next ( );
            String t = sc.next ( );
            String u = sc.next ( );
            if ( s.equals ( "AC" ) && t.equals ( "WA" ) && u.equals ( "WA" ) ) System.out.println ( "AC" );
            else if ( s.equals ( "WA" ) && t.equals ( "AC" ) && u.equals ( "WA" ) ) System.out.println ( "AC" );
            else if ( s.equals ( "WA" ) && t.equals ( "WA" ) && u.equals ( "AC" ) ) System.out.println ( "AC" );
            else System.out.println ( "WA" );
        }
    }
}
import java.util.*;

public class atcoder_ABC142_A {
    public static void main ( String [ ] args ) {
        Scanner scanner = new Scanner( System.in );
        int n = Integer.parseInt ( scanner.nextLine ( ) );
        int t = 0;
        for ( int i = 0; i < n; i++ ) {
            if ( i % 2 == 0 ) {
                t += 1;
            }
        }
        System.out.println( ( double ) t / n );
    }
}
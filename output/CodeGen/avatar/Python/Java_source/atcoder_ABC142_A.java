public class atcoder_ABC142_A {
    public static void main ( String [ ] args ) {
        int n = Integer.parseInt ( StdIn.readString ( ) );
        int t = 0;
        for ( int i = 0; i < n; i++ ) {
            if ( i % 2 == 0 ) {
                t += 1;
            }
        }
        StdOut.println ( t / n );
    }
}
public class s875904659 {
    public static void main( String[] args ) {
        int n = Integer.parseInt( args[ 0 ] );
        String[] cards = new String[ n ];
        for ( int i = 0; i < n; i++ ) {
            cards[ i ] = StdIn.readString( );
        }
        for ( int i = 0; i < n; i++ ) {
            for ( int j = n - 1; j > i; j-- ) {
                if ( Integer.parseInt( cards[ j - 1 ] ) < Integer.parseInt( cards[ j ] ) ) {
                    String temp = cards[ j - 1 ];
                    cards[ j - 1 ] = cards[ j ];
                    cards[ j ] = temp;
                }
            }
        }
        for ( String card : cards ) {
            StdOut.println( card );
        }
    }
}
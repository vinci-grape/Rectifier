public class codeforces_231_A {
    public int findMaxForm ( int [ ] forms, int n ) {
        int max = 0;
        int c = 0;
        for ( int i = 0; i < n; i++ ) {
            int [] l1 = new int [ forms[ i ] ];
            for ( int j = 0; j < forms[ i ]; j++ ) {
                l1[ j ] = Integer.parseInt ( input ( ) );
            }
            if ( sum ( l1 ) > 1 ) {
                c = c + 1;
            }
        }
        return c;
    }
    public int sum ( int [] l1 ) {
        int sum = 0;
        for ( int i = 0; i < l1.length; i++ ) {
            sum = sum + l1[ i ];
        }
        return sum;
    }
}
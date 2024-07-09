public class atcoder_ABC164_D {
    public int findMaxForm ( String[] strs, int m, int n ) {
        int[] m1 = new int [ m + 1 ];
        int[] a = new int [ m + 1 ];
        int[] r = new int [ n ];
        for ( int i = 0 ; i < strs. length ; i ++ ) {
            int[] e = new int [ strs [ i ]. length ( ) ];
            for ( int j = 0 ; j < strs [ i ]. length ( ) ; j ++ ) {
                e [ j ] = strs [ i ]. charAt ( j ) - '0';
            }
            a [ i + 1 ] = a [ i ] + e [ 0 ];
            m1 [ a [ i ] % m ] ++;
            a [ i + 1 ] = a [ i ] + e [ 1 ];
            m1 [ a [ i ] % m ] ++;
            a [ i + 1 ] = a [ i ] + e [ 2 ];
            m1 [ a [ i ] % m ] ++;
            a [ i + 1 ] = a [ i ] + e [ 3 ];
            m1 [ a [ i ] % m ] ++;
            a [ i + 1 ] = a [ i ] + e [ 4 ];
            m1 [ a [ i ] % m ] ++;
            a [ i + 1 ] = a [ i ] + e [ 5 ];
            m1 [ a [ i ] % m ] ++;
            a [ i + 1 ] = a [ i ] + e [ 6 ];
            m1 [ a [ i ] % m ] ++;
            a [ i + 1 ] = a [ i ] + e [ 7 ];
            m1 [ a [ i ] % m ] ++;
            a [ i + 1 ] = a [ i ] + e [ 8 ];
            m1 [ a [ i ] % m ] ++;
            a [ i + 1 ] = a [ i ] + e [ 9 ];
            m1 [ a [ i ] % m ] ++;
        }
        for ( int i = 0 ; i < m1. length ; i ++ ) {
            m1 [ i ] = m1 [ i ] / m;
        }
        for ( int i = 0 ; i < a. length ; i ++ ) {
            a [ i ] = a [ i ] / m;
        }
        for ( int i = 0 ; i < r. length ; i ++ ) {
            r [ i ] = 0;
        }
        for ( int i = 0 ; i < a. length ; i ++ ) {
            r [ a [ i ] % n ] += m1 [ a [ i ] % m ];
        }
        return r [ 0 ];
    }
}
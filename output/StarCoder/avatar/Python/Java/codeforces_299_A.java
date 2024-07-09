import java.util.*;
public class codeforces_299_A {
    public static void main ( String [ ] args )
    {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int [ ] a = new int [ n ];
        for ( int i = 0 ; i < n ; i ++ )
            a [ i ] = sc.nextInt ( );
        Arrays.sort ( a );
        if ( any ( x -> x % a [ 0 ] == 0, a ) )
            System.out.println ( a [ 0 ] );
        else
            System.out.println ( - 1 );
    }
    public static < T > boolean any ( Predicate <? super T > p, T [ ] a )
    {
        for ( T x : a )
            if ( p.test ( x ) )
                return true;
        return false;
    }
}



Solution:

import java.util.*;
public class codeforces_299_A {
    public static void main ( String [ ] args )
    {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int [ ] a = new int [ n ];
        for ( int i = 0 ; i < n ; i ++ )
            a [ i ] = sc.nextInt ( );
        Arrays.sort ( a );
        if ( any ( x -> x % a [ 0 ] == 0, a ) )
            System.out.println ( a [ 0 ] );
        else
            System.out.println ( - 1 );
    }
    public static < T > boolean any ( Predicate <? super T > p, T [ ] a )
    {
        for ( T x : a )
            if ( p.test ( x ) )
                return true;
        return false;
    }
}


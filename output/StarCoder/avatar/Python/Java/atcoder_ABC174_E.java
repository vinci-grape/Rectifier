import java.util.*;
public class atcoder_ABC174_E {
    public static void main ( String args [ ] )
    {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int k = sc.nextInt ( );
        int lis [ ] = new int [ n ];
        for ( int i = 0 ; i < n ; i ++ )
            lis [ i ] = sc.nextInt ( );
        int a = 1, b = 0;
        for ( int i = 0 ; i < n ; i ++ )
            b = Math.max ( b, lis [ i ] );
        int ans = b;
        while ( a <= b )
        {
            int mid = ( a + b ) / 2;
            if ( check ( lis, k, mid ) )
            {
                ans = mid;
                b = mid - 1;
            }
            else
                a = mid + 1;
        }
        System.out.println ( ans );
    }
    public static boolean check ( int [ ] lis, int k, int mid )
    {
        int count = 0;
        for ( int i = 0 ; i < lis.length ; i ++ )
        {
            if ( lis [ i ] % mid == 0 )
                count += 1;
            count -= lis [ i ] / mid;
        }
        return count >= k;
    }
}


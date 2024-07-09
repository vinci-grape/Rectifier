import java.util.*;
import java.io.*;

public class codeforces_351_A {
    public static void main ( String[] args )
    {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        double[] arr = new double[n];
        for ( int i = 0 ; i < n ; i++ )
            arr[i] = sc.nextDouble ( );
        Arrays.sort ( arr, ( a, b ) -> ( int ) ( a - b ) );
        int o = 2 * n - arr.length;
        double arr_sum = 0;
        for ( int i = 0 ; i < n ; i++ )
            arr_sum += arr[i];
        double res = 1e9;
        for ( int i = 0 ; i <= n ; i++ )
            if ( i + o < n )
                res = Math.min ( res, Math.abs ( i - arr_sum ) );
        System.out.printf ( "%.3f", res );
    }
}
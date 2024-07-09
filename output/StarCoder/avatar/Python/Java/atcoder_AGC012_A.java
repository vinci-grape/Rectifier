import java.util.*;
import java.lang.*;
import java.io.*;
class atcoder_AGC012_A {
    public static void main ( String[] args ) {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int[] A = new int[n];
        for ( int i = 0 ; i < n ; i++ ) {
            A[i] = sc.nextInt ( );
        }
        Arrays.sort ( A );
        int ans = 0;
        for ( int i = A.length - 2 ; i >= A.length - 2 * n - 1 ; i -= 2 ) {
            ans += A[i];
        }
        System.out.println ( ans );
    }
}

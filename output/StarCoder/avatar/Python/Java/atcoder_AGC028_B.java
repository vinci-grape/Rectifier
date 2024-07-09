import java.util.*;
import java.math.*;
import java.io.*;

public class atcoder_AGC028_B {
    public static void main ( String[] args ) {
        Scanner sc = new Scanner ( System.in );
        int N = sc.nextInt ( );
        int M = 1000000;
        int[] A = new int[N];
        for ( int i = 0 ; i < N ; i++ ) {
            A[i] = sc.nextInt ( );
        }
        int Nsq = 1000;
        int[] fact = new int[M];
        fact[0] = 1;
        for ( int n = 1 ; n < Nsq ; n++ ) {
            fact[n] = fact[n - 1] * n % M;
        }
        for ( int n = 1 ; n < Nsq ; n++ ) {
            fact[n] = fact[n] * fact[n - 1] % M;
        }
        int j = 0;
        long[] inv = new long[N];
        inv[0] = 1;
        for ( int i = 1 ; i < N ; i++ ) {
            inv[i] = ( inv[i - 1] + M - 1 ) % M;
        }
        long[] temp = new long[N];
        for ( int i = 0 ; i < N ; i++ ) {
            temp[i] = ( inv[i] + inv[N - 1 - i] - 1 ) % M;
        }
        long ans = 0;
        for ( int i = 0 ; i < N ; i++ ) {
            ans = ( ans + A[i] * temp[i] % M ) % M;
        }
        ans = ans * fact[N] % M;
        System.out.println ( ans );
    }
}
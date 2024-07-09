import java.util.*;
import java.lang.*;
import java.io.*;
public class atcoder_AGC002_B
{
    public static void main ( String[] args ) throws java.lang.Exception {
        Scanner sc = new Scanner ( System.in );
        int N = sc.nextInt ( );
        int M = sc.nextInt ( );
        int[][] balls = new int[N][2];
        balls[0][0] = 0;
        balls[0][1] = 1;
        for ( int i = 0 ; i < M ; i++ ) {
            int x = sc.nextInt ( );
            int y = sc.nextInt ( );
            int w_x = balls[x - 1][0];
            int r_x = balls[x - 1][1];
            int w_y = balls[y - 1][0];
            int r_y = balls[y - 1][1];
            if ( w_x >= 1 && r_x >= 1 ) {
                balls[x - 1][0] -= 1;
                balls[y - 1][1] += 1;
            }
            else if ( w_x == 0 ) {
                balls[x - 1][1] -= 1;
                balls[y - 1][1] += 1;
            }
            else {
                balls[x - 1][0] -= 1;
                balls[y - 1][0] += 1;
            }
        }
        int ans = 0;
        for ( int i = 0 ; i < N ; i++ ) {
            if ( balls[i][1] != 0 ) {
                ans += 1;
            }
        }
        System.out.println ( ans );
    }
}
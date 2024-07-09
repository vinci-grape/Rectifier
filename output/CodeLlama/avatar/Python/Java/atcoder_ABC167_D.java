import java.util.*;
import java.lang.*;
import java.io.*;
public class atcoder_ABC167_D {
    public static void main (String[] args) {
        Scanner sc = new Scanner ( System.in );
        int N = sc.nextInt ( );
        int K = sc.nextInt ( );
        int [] L = new int [ N + 1 ];
        for ( int i = 0 ; i < N ; i++ ) {
            L [ i ] = sc.nextInt ( );
        }
        L [ N ] = - 1;
        int [] path = new int [ N + 1 ];
        int ind = 0;
        int count = 0;
        int x = 1;
        int t = - 1;
        boolean flag = false;
        HashMap < Integer , Integer > Hash = new HashMap < > ( );
        for ( int i = 0 ; i < N + 1 ; i++ ) {
            int ne = L [ x ];
            if ( Hash.containsKey ( ne ) ) {
                flag = true;
                t = Hash.get ( ne );
                break;
            }
            path [ i ] = ne;
            ind++;
            Hash.put ( ne , ind );
            x = ne;
        }
        if ( flag == true ) {
            int [] loop = new int [ ind ];
            for ( int i = 0 ; i < ind ; i++ ) {
                loop [ i ] = path [ i ];
            }
            if ( K < ( ind ) ) {
                System.out.println ( path [ K ] );
            }
            else {
                K = K - ind;
                K = K % loop.length;
                System.out.println ( loop [ K ] );
            }
        }
        else {
            System.out.println ( path [ K - 1 ] );
        }
    }
}
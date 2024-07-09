import java.util.*;

public class codeforces_354_A {
    public static void main ( String [ ] args ) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt ( );
        int L = scanner.nextInt ( );
        int R = scanner.nextInt ( );
        int QL = scanner.nextInt ( );
        int QR = scanner.nextInt ( );
        int[] W = new int[n];
        for (int i = 0; i < n; i++) {
            W[i] = scanner.nextInt();
        }
        System.out.println ( minEnergy ( n, L, R, QL, QR, W) );
    }
    public static int minEnergy ( int n, int L, int R, int QL, int QR, int[] W) {
        int[] sum_el = new int[ n + 1 ];
        sum_el[ 0 ] = 0;
        for ( int i = 1 ; i <= n ; i++ ) {
            sum_el[ i ] = sum_el[ i - 1 ] + W[ i - 1 ];
        }
        int answer = QR * ( n - 1 ) + sum_el[ n ] * R;
        for ( int i = 1 ; i <= n ; i++ ) {
            int energy = L * sum_el[ i ] + R * ( sum_el[ n ] - sum_el[ i ] );
            if ( i > ( n - i ) ) {
                energy = energy + ( i - ( n - i ) - 1 ) * QL;
            } else if ( ( n - i ) > i ) {
                energy = energy + ( ( n - i ) - i - 1 ) * QR;
            }
            if ( energy < answer ) {
                answer = energy;
            }
        }
        return answer;
    }
}
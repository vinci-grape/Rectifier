import java.util.Scanner;
public class atcoder_AGC043_B {
    public static int twos_in_factorial ( int n ) {
        int count = 0;
        while ( n > 0 ) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    public static boolean parity_of_nCr ( int n , int i ) {
        return twos_in_factorial ( n ) - twos_in_factorial ( n - i ) - twos_in_factorial ( i ) > 0;
    }
    public static void main ( String[] args ) {
        Scanner sc = new Scanner ( System.in );
        int n = sc.nextInt ( );
        int[] nums = new int[n];
        boolean no_one = false;
        for ( int i = 0 ; i < n ; i++ ) {
            nums[i] = sc.nextInt ( );
            if ( nums[i] == 1 ) {
                no_one = true;
            }
        }
        boolean is_odd = false;
        for ( int i = 0 ; i < n ; i++ ) {
            if ( !parity_of_nCr ( n - 1 , i ) && nums[i] % 2 == 1 ) {
                is_odd ^= true;
            }
        }
        if ( !is_odd ) {
            System.out.println ( 0 );
        } else {
            System.out.println ( 1 << no_one );
        }
    }
}
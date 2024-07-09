import java.util.*;
public class codeforces_55_B {
    public static void main ( String [ ] args ) {
        Scanner sc = new Scanner ( System.in );
        int [ ] nums = new int [ 3 ];
        String [ ] operations = new String [ 3 ];
        for ( int i = 0 ; i < 3 ; i++ ) {
            nums [ i ] = sc.nextInt ( );
            operations [ i ] = sc.next ( );
        }
        int [ ] ans = new int [ 1 ];
        rememberTheNumber ( nums, 0, operations, ans );
        System.out.println ( ans [ 0 ] );
    }
    public static void rememberTheNumber ( int [ ] nums, int i, String [ ] operations, int [ ] ans ) {
        if ( i >= 3 ) {
            return;
        }
        for ( int j = 0 ; j < 4 ; j++ ) {
            for ( int k = j + 1 ; k < 4 ; k++ ) {
                if ( nums [ j ]!= - 1 && nums [ k ]!= - 1 ) {
                    int s = nums [ j ];
                    nums [ j ] = - 1;
                    int t = nums [ k ];
                    if ( operations [ i ].equals ( "+" ) ) {
                        nums [ k ] = s + t;
                    }
                    else if ( operations [ i ].equals ( "*" ) ) {
                        nums [ k ] = s * t;
                    }
                    if ( i == 2 && nums [ k ] < ans [ 0 ] ) {
                        ans [ 0 ] = nums [ k ];
                    }
                    rememberTheNumber ( nums, i + 1, operations, ans );
                    nums [ j ] = s;
                    nums [ k ] = t;
                }
            }
        }
    }
}
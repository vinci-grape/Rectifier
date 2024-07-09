import java.util.*;
public class atcoder_ABC145_C {
    public static void main ( String [ ] args ) {
        Scanner scanner = new Scanner ( System.in );
        int N = scanner.nextInt ( );
        int [ ] x = new int [ N ];
        int [ ] y = new int [ N ];
        for ( int i = 0 ; i < N ; i ++ ) {
            x [ i ] = scanner.nextInt ( );
            y [ i ] = scanner.nextInt ( );
        }
        solve ( N, x, y );
    }
    public static void solve ( int N, int [ ] x, int [ ] y ) {
        int [ ] indices = new int [ N ];
        for ( int i = 0 ; i < N ; i ++ ) {
            indices [ i ] = i;
        }
        List < Integer > [ ] permutations = new ArrayList < > ( );
        for ( int [ ] permutation : new PermutationGenerator ( indices ).generate ( ) ) {
            int total_distance = 0;
            for ( int i = 0 ; i < N - 1 ; i ++ ) {
                int f = permutation [ i ];
                int t = permutation [ i + 1 ];
                int distance = ( ( x [ t ] - x [ f ] ) * ( x [ t ] - x [ f ] ) + ( y [ t ] - y [ f ] ) * ( y [ t ] - y [ f ] ) ) ;
                total_distance += distance;
            }
            permutations.add ( total_distance );
        }
        int result = 0;
        for ( int distance : permutations ) {
            result += distance;
        }
        result /= permutations.size ( );
        System.out.println ( result );
    }
}
class PermutationGenerator {
    private int [ ] indices;
    public PermutationGenerator ( int [ ] indices ) {
        this.indices = indices;
    }
    public List < int [ ] > generate ( ) {
        List < int [ ] > result = new ArrayList < > ( );
        generate ( indices, 0, result );
        return result;
    }
    private void generate ( int [ ] indices, int start, List < int [ ] > result ) {
        if ( start == indices.length ) {
            result.add ( indices.clone ( ) );
            return;
        }
        for ( int i = start ; i < indices.length ; i ++ ) {
            swap ( indices, start, i );
            generate ( indices, start + 1, result );
            swap ( indices, start, i );
        }
    }
    private void swap ( int [ ] indices, int i, int j ) {
        int temp = indices [ i ];
        indices [ i ] = indices [ j ];
        indices [ j ] = temp;
    }
}
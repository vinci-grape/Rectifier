import java.util.* ; public class codeforces_500_A { public static boolean dfs ( int currpos, int [ ] arr, int target ) { if ( currpos == target ) return true ; if ( currpos == arr.length + 1 ) return false ; boolean teleport = dfs ( currpos + arr [ currpos - 1 ], arr, target ) ; if ( teleport ) return true ; return false ; } public static void main ( String [ ] args ) throws Exception { Scanner sc = new Scanner ( System.in ) ; int n = sc.nextInt ( ) ; int goal = sc.nextInt ( ) ; int [ ] arr = new int [ n - 1 ] ; for ( int i = 0 ; i < n - 1 ; i ++ ) arr [ i ] = sc.nextInt ( ) ; boolean isFound = dfs ( 1, arr, goal ) ; if ( isFound ) System.out.println ( "YES" ) ; else System.out.println ( "NO" ) ; sc.close ( ) ; } }
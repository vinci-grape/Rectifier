import java.util.Arrays ; import java.util.* ; import java.io.PrintWriter ; import java.util.Scanner ; 
def main ( ): 
    input = java.io.BufferedReader ( java.io.InputStreamReader ( System.in ) ) ; 
    output = java.io.PrintWriter ( java.io.OutputStreamWriter ( System.out ) ) ; 
    n = int ( input.readLine ( ) ) ; 
    vec = [ [ int ( x ) for x in input.readLine ( ).split ( " " ) ] for i in range ( n ) ] ; 
    ans = 500 ; 
    ansprice = 20000 ; 
    for i in range ( n ): 
        fl = 1 ; 
        for j in range ( n ): 
            if ( vec [ i ] [ 0 ] < vec [ j ] [ 0 ] and vec [ i ] [ 1 ] < vec [ j ] [ 1 ] and vec [ i ] [ 2 ] < vec [ j ] [ 2 ] ): 
                fl = 0 ; 
        if ( fl == 1 ): 
            if ( vec [ i ] [ 3 ] < ansprice ): 
                ansprice = vec [ i ] [ 3 ] ; 
                ans = i + 1 ; 
    output.println ( ans ) ; 
    output.close ( ) ; 


import java.util.Arrays ; import java.util.* ; import java.io.PrintWriter ; import java.util.Scanner ; 
public class codeforces_106_B { 
    public static void main ( String [ ] args ) { 
        Scanner input = new Scanner ( System.in ) ; 
        PrintWriter output = new PrintWriter ( System.out ) ; 
        int n = input.nextInt ( ) ; 
        int [ ] [ ] vec = new int [ n ] [ 4 ] ; 
        for ( int i = 0 ; i < n ; i ++ ) { 
            vec [ i ] [ 0 ] = input.nextInt ( ) ; 
            vec [ i ] [ 1 ] = input.nextInt ( ) ; 
            vec [ i ] [ 2 ] = input.nextInt ( ) ; 
            vec [ i ] [ 3 ] = input.nextInt ( ) ; 
        } 
        int ans = 500 ; 
        int ansprice = 20000 ; 
        for ( int i = 0 ; i < n ; i ++ ) { 
            int fl = 1 ; 
            for ( int j = 0 ; j < n ; j ++ ) { 
                if ( vec [ i ] [ 0 ] < vec [ j ] [ 0 ] and vec [ i ] [ 1 ] < vec [ j ] [ 1 ] and vec [ i ] [ 2 ] < vec [ j ] [ 2 ] ) { 
                    fl = 0 ; 
                } 
            } 
            if ( fl == 1 ) { 
                if ( vec [ i ] [ 3 ] < ansprice ) { 
                    ansprice = vec [ i ] [ 3 ] ; 
                    ans = i + 1 ; 
                } 
            } 
        } 
        output.println ( ans ) ; 
        output.close ( ) ; 
    } 
}
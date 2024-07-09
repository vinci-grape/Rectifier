import java.util.*;
import java.io.*;
public class atcoder_AGC035_B {
    public static void main ( String args [ ] ) throws IOException
    {
        BufferedReader br = new BufferedReader ( new InputStreamReader ( System.in ) ) ;
        int N = Integer.parseInt ( br.readLine ( ) ) ;
        int M = Integer.parseInt ( br.readLine ( ) ) ;
        int [ ] edges = new int [ N ] [ ] ;
        int [ ] degs = new int [ N ] ;
        int [ ] parity = new int [ N ] ;
        boolean [ ] flag = new boolean [ N ] ;
        for ( int i = 0 ; i < N ; i ++ )
        {
            edges [ i ] = new int [ 2 ] ;
            degs [ i ] = 0 ;
            parity [ i ] = 0 ;
            flag [ i ] = false ;
        }
        for ( int i = 0 ; i < M ; i ++ )
        {
            String [ ] temp = br.readLine ( ).split ( " " ) ;
            int a = Integer.parseInt ( temp [ 0 ] ) ;
            int b = Integer.parseInt ( temp [ 1 ] ) ;
            edges [ a - 1 ] [ 0 ] = b ;
            edges [ a - 1 ] [ 1 ] = 1 ;
            edges [ b - 1 ] [ 0 ] = a ;
            edges [ b - 1 ] [ 1 ] = 0 ;
            degs [ a - 1 ] += 1 ;
            degs [ b - 1 ] += 1 ;
        }
        if ( M % 2!= 0 )
        {
            System.out.println ( - 1 ) ;
            return ;
        }
        PriorityQueue < Integer > Q = new PriorityQueue < > ( ) ;
        for ( int i = 0 ; i < N ; i ++ )
        {
            Q.add ( degs [ i ] ) ;
        }
        while ( Q.size ( ) > 0 )
        {
            int u = Q.poll ( ) ;
            if ( flag [ u ] )
                continue ;
            flag [ u ] = true ;
            for ( int i = 0 ; i < 2 ; i ++ )
            {
                int v = edges [ u ] [ i ] ;
                if ( parity [ u ]!= 0 && i == 0 )
                {
                    System.out.println ( u + 1 + " " + v + 1 ) ;
                    parity [ u ] = 1 - parity [ u ] ;
                }
                else
                {
                    System.out.println ( v + 1 + " " + u + 1 ) ;
                    parity [ v ] = 1 - parity [ v ] ;
                }
                degs [ v ] -= 1 ;
                Q.add ( degs [ v ] ) ;
            }
        }
    }
}
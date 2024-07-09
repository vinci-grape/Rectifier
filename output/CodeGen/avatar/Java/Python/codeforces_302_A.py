import java.io.IOException ; import java.util.Scanner ; def main ( ):
    sc = Scanner ( System.in )
    n = sc.nextInt ( )
    k = sc.nextInt ( )
    arr = [ 0 ] * n
    for i in range ( 0, n ):
        arr [ i ] = sc.nextInt ( )
    res = [ ]
    o = 0
    e = 0
    for i in range ( 0, n ):
        if arr [ i ] == 1:
            o += 1
        else:
            e += 1
    for i in range ( 0, k ):
        l = sc.nextInt ( )
        r = sc.nextInt ( )
        if ( ( r - l + 1 ) % 2 == 1 ):
            res.append ( "0\n" )
        else:
            if ( ( r - l + 1 ) / 2 <= o and ( r - l + 1 ) / 2 <= e ):
                res.append ( "1\n" )
            else:
                res.append ( "0\n" )
    print ( "".join ( res ) )
    sc.close ( )
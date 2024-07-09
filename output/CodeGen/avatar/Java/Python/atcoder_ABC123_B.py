import java.util.Scanner ; import java.util.TreeMap ; def main ( ):
    sc = java.util.Scanner ( sys.stdin )
    a = [ sc.nextInt ( ) for i in range ( 5 ) ]
    r = [ a [ i ] % 10 for i in range ( 5 ) ]
    map = java.util.TreeMap ( )
    for i in range ( 5 ):
        a [ i ] = sc.nextInt ( )
        r [ i ] = a [ i ] % 10
        b = 10
        if r [ i ]!= 0:
            b = 10 - r [ i ]
            map.put ( b, a [ i ] )
    ans = 0
    if len ( map ) == 0:
        for i in range ( 5 ):
            ans += a [ i ]
        print ( ans )
        return
    last = map.get ( map.lastKey ( ) )
    idx = 0
    for i in range ( 5 ):
        if a [ i ] == last:
            idx = i
    for i in range ( 5 ):
        if i!= idx:
            if a [ i ] % 10 == 0:
                ans += a [ i ]
            else:
                ans += a [ i ] + ( 10 - r [ i ] )
    ans += last
    print ( ans )
main ( )
import java.util.ArrayDeque ; import java.util.Scanner ; import java.util.stream.IntStream ; def main ( ):
    scan = Scanner ( System.in )
    N = scan.nextInt ( )
    a = [ ]
    for i in range ( N ):
        a.append ( scan.nextInt ( ) )
    leftl = [ ]
    rightl = [ ]
    que = ArrayDeque ( )
    index = 0
    while index < N:
        while ( not que.isEmpty ( ) and a [ que.peek ( ) ] > a [ index ] ):
            ind = que.poll ( )
            rightl [ ind ] = index - ind - 1
        que.push ( index )
        index += 1
    while ( not que.isEmpty ( ) ):
        ind = que.poll ( )
        rightl [ ind ] = N - ind - 1
    index = N - 1
    while index >= 0:
        while ( not que.isEmpty ( ) and a [ que.peek ( ) ] > a [ index ] ):
            ind = que.poll ( )
            leftl [ ind ] = ind - index - 1
        que.push ( index )
        index -= 1
    while ( not que.isEmpty ( ) ):
        ind = que.poll ( )
        leftl [ ind ] = ind - index - 1
    ans = 0
    for i in range ( N ):
        ans += a [ i ] * ( leftl [ i ] + 1 ) * ( rightl [ i ] + 1 )
    print ( ans )
main ( )
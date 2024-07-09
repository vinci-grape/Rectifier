import java.io.BufferedReader ; import java.io.IOException ; import java.io.InputStreamReader ; import java.util.ArrayList ; import java.util.HashMap ; def main ( ):
    reader = BufferedReader (
        InputStreamReader (
            System.in
        )
    )
    input = reader.readLine ().split ( " " )
    m = int ( input [ 1 ] )
    s = int ( input [ 2 ] )
    f = int ( input [ 3 ] )
    maxT = - 1
    map = HashMap ( )
    while m > 0:
        mth = reader.readLine ().split ( " " )
        k = int ( mth [ 0 ] )
        map.put ( k, ArrayList ( ) )
        map.get ( k ).add ( int ( mth [ 1 ] ) )
        map.get ( k ).add ( int ( mth [ 2 ] ) )
        maxT = max ( maxT, k )
        m -= 1
    actions = StringBuilder ( )
    final char M = ( s < f )? 'R' : 'L'
    d = ( s < f )? + 1 : - 1
    cur = s
    a = - 1
    b = - 1
    for t in range ( 1, maxT + 1 ):
        if map.contains ( t ) and ( ( cur >= a and cur <= b ) or ( cur + d >= a and cur + d <= b ) ):
            actions.append ( 'X' )
        else:
            actions.append ( M )
            cur += d
        if cur == f:
            break
    while cur!= f:
        actions.append ( M )
        cur += d
    print ( actions )




import java.io.BufferedReader ; import java.io.IOException ; import java.io.InputStreamReader ; import java.util.ArrayList ; import java.util.HashMap ; public class codeforces_342_B { public static void main ( String [ ] args ) throws IOException { BufferedReader reader = new BufferedReader ( new InputStreamReader ( System.in ) ) ; String input [ ] = reader.readLine ( ).split ( " " ) ; int m = Integer.parseInt ( input [ 1 ] ) ; int s = Integer.parseInt ( input [ 2 ] ) ; int f = Integer.parseInt ( input [ 3 ] ) ; int maxT = - 1 ; HashMap < Integer, ArrayList < Integer >> map = new HashMap < > ( ) ; while ( m > 0 ) { String mth [ ] = reader.readLine ( ).split ( " " ) ; int k = Integer.parseInt ( mth [ 0 ] ) ; map.put ( k, new ArrayList < > ( ) ) ; map.get ( k ).add ( Integer.parseInt ( mth [ 1 ] ) ) ; map.get ( k ).add ( Integer.parseInt ( mth [ 2 ] ) ) ; maxT = Math.max ( maxT, k ) ; m -- ; } StringBuilder actions = new StringBuilder ( ) ; final char M = ( s < f )? 'R' : 'L' ; int d = ( s < f )? + 1 : - 1 ; int cur = s ; int a = - 1 ; int b = - 1 ; for ( int t = 1 ; t <= maxT ; t ++ ) { if ( map.containsKey ( t ) ) { a = map.get ( t ).get ( 0 ).intValue ( ) ; b = map.get ( t ).get ( 1 ).intValue ( ) ; } if ( map.containsKey ( t ) and ( ( cur >= a and cur <= b ) or ( cur + d >= a and cur + d <= b ) ) ) { actions.append ( 'X' ) ; } else { actions.append ( M ) ; cur += d ; } if ( cur == f ) break ; } while ( cur!= f ) { actions.append ( M ) ; cur += d ; } System.out.println ( actions ) ; } }



Translate the above Java code to Python.



import java.io.BufferedReader ; import java.io.IOException ; import java.io.InputStreamReader ; import java.util.ArrayList ; import java.util.HashMap ; def main ( ):
    reader = BufferedReader (
        InputStreamReader (
            System.in
        )
    )
    input = reader.readLine ().split ( " " )
    m = int ( input [ 1 ] )
    s = int ( input [ 2 ] )
    f = int ( input [ 3 ] )
    maxT = - 1
    map = HashMap ( )
    while m > 0:
        mth = reader.readLine ().split ( " " )
        k = int ( mth [ 0 ] )
        map.put ( k, ArrayList ( ) )
        map.get ( k ).add ( int ( mth [ 1 ] ) )
        map.get ( k ).add ( int ( mth [ 2 ] ) )
        maxT = max ( maxT, k )
        m -= 1
    actions = StringBuilder ( )
    final char M = ( s < f )? 'R' : 'L'
    d = ( s < f )? + 1 : - 1
    cur = s
    a = - 1
    b = - 1
    for t in range ( 1, maxT + 1 ):
        if map.contains ( t ) and ( ( cur >= a and cur <= b ) or ( cur + d >= a and cur + d <= b ) ):
            actions.append ( 'X' )
        else:
            actions.append ( M )
            cur += d
        if cur == f:
            break
    while cur!= f:
        actions.append ( M )
        cur += d
    print ( actions )




import java.io.BufferedReader ; import java.io.IOException ; import java.io.InputStreamReader ; import java.util.ArrayList ; import java.util.HashMap ; public class codeforces_342_B { public static void main ( String [ ] args ) throws IOException { BufferedReader reader = new BufferedReader ( new InputStreamReader ( System.in ) ) ; String input [ ] = reader.readLine ( ).split ( " " ) ; int m = Integer.parseInt ( input [ 1 ] ) ; int s = Integer.parseInt ( input [ 2 ] ) ; int f = Integer.parseInt ( input [ 3 ] ) ; int maxT = -
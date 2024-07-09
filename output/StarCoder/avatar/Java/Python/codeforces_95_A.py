import java.io.* ; import java.util.* ; public class codeforces_95_A extends PrintWriter {
public codeforces_95_A ( ) { super ( System.out, true ) ; }
Scanner sc = new Scanner ( System.in ) ;
public static void main ( String [ ] $ ) {
codeforces_95_A o = new codeforces_95_A ( ) ;
o.main ( ) ;
o.flush ( ) ;
}
int compare ( char [ ] aa, int i, char [ ] bb, int j, int m ) {
while ( m -- > 0 ) {
char a = Character.toUpperCase ( aa [ i ] ) ;
char b = Character.toUpperCase ( bb [ j ] ) ;
if ( a!= b ) return a - b ;
i ++ ;
j ++ ;
}
return 0 ;
}
void main ( ) {
int n = sc.nextInt ( ) ;
char [ ] [ ] ss = new char [ n ] [ ] ;
for ( int i = 0 ; i < n ; i ++ ) ss [ i ] = sc.next ( ).toCharArray ( ) ;
char [ ] cc = sc.next ( ).toCharArray ( ) ;
int m = cc.length ;
char c = sc.next ( ).charAt ( 0 ) ;
char c_ = Character.toUpperCase ( c ) ;
char a = c == 'a'? 'b' : 'a' ;
char a_ = Character.toUpperCase ( a ) ;
boolean [ ] lucky = new boolean [ m ] ;
for ( int j = 0 ; j < m ; j ++ ) for ( int i = 0 ; i < n ; i ++ ) {
int l = ss [ i ].length ;
if ( m - j >= l && compare ( cc, j, ss [ i ], 0, l ) == 0 ) for ( int h = 0 ; h < l ; h ++ ) lucky [ j + h ] = true ;
}
for ( int j = 0 ; j < m ; j ++ ) if ( lucky [ j ] ) {
if ( Character.toLowerCase ( cc [ j ] ) == c ) cc [ j ] = Character.isUpperCase ( cc [ j ] )? a_ : a ;
else cc [ j ] = Character.isUpperCase ( cc [ j ] )? c_ : c ;
}
println ( cc ) ;
}
}
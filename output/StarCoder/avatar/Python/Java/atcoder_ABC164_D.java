s, l = ( new Scanner ( System. in ) ). nextLine ( ), 2019 ;
m, a, r = ( new int [ l ], 0, 0 ) ;
for ( int i = 0 ; i < s. length ( ) ; i ++ ) {
    a += ( s. charAt ( i ) - '0' ) * Math. pow ( 10, i, l ) ;
    r += m [ a % l ] ;
    m [ a % l ] ++ ;
}
System. out. println ( r ) ;
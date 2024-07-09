s = input ( )
res = new String [ ]
punctuation = new String [ ',', '.','!','?' ]
for ( int i = 0 ; i < s.length ( ) ; i++ ) {
    if ( i >= 1 ) {
        if ( s.charAt ( i ) =='' ) {
            if ( res [ res.length ( ) - 1 ]!='' ) {
                res [ res.length ( ) ] = s.charAt ( i ) ;
            }
        }
        else {
            if ( s.charAt ( i ) in punctuation ) {
                if ( res [ res.length ( ) - 1 ] =='' ) {
                    res [ res.length ( ) - 1 ] = "" ;
                }
                res [ res.length ( ) ] = s.charAt ( i ) ;
                res [ res.length ( ) ] = "" ;
            }
            else {
                res [ res.length ( ) ] = s.charAt ( i ) ;
            }
        }
    }
    else {
        if ( s.charAt ( i ) =='' ) {
            continue ;
        }
        if ( s.charAt ( i ) in punctuation ) {
            continue ;
        }
        else {
            res [ res.length ( ) ] = s.charAt ( i ) ;
        }
    }
}
System.out.println ( String.valueOf ( res ) )
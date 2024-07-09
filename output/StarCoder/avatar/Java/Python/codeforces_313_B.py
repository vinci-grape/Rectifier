import java.io.* ; import java.util.StringTokenizer ; class codeforces_313_B ( ) :
    def __init__ ( self ) :
        self.br = BufferedReader ( )
        self.pw = PrintWriter ( )
    def sol ( self ) :
        s = self.br.readLine ( )
        cum = [ 0 ] * ( len ( s ) + 1 )
        cum [ 0 ] = cum [ len ( s ) ] = 0
        for i in range ( 1, len ( s ) ) :
            if ( s.charAt ( i ) == s.charAt ( i - 1 ) ) :
                cum [ i ] = cum [ i - 1 ] + 1
            else :
                cum [ i ] = cum [ i - 1 ]
        q = Integer.parseInt ( self.br.readLine ( ) )
        while ( q --!= 0 ) :
            l, r = map ( int, self.br.readLine ( ).split ( ) )
            self.pw.println ( cum [ r ] - cum [ l - 1 ] )
    def __del__ ( self ) :
        self.br.close ( )
        self.pw.close ( )
if __name__ == '__main__' :
    c = codeforces_313_B ( )
    c.sol ( )
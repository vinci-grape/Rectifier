import java.io.BufferedReader ; import java.io.IOException ; import java.io.InputStreamReader ; import java.io.PrintWriter ; def main ( ):
	br = BufferedReader ( new InputStreamReader ( System.in ) )
	pw = PrintWriter ( System.out )
	s = br.readLine ( )
	sb = StringBuilder ( )
	n = len ( s )
	sb.append ( s [ 0 ] )
	for i in range ( 1, n ):
		c = s [ i ]
		if isLatinLetter ( c ):
			if not isLatinLetter ( s [ i - 1 ] ):
				sb.append ('' )
			sb.append ( c )
		else:
			sb.append ( c )
	pw.println ( sb )
	pw.flush ( )
	pw.close ( )
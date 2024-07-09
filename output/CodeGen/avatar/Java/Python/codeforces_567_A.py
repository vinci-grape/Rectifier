import java.util.Scanner ; import javax.swing.JOptionPane ; 
def main ( ):
	s = Scanner ( System.in )
	a = s.nextInt ( )
	ar = [ ]
	for i in range ( a ):
		ar.append ( s.nextInt ( ) )
	for i in range ( a ):
		max = max ( ar [ i ] - ar [ 0 ], ar [ a - 1 ] - ar [ i ] )
		if i == 0:
			min = ar [ i + 1 ] - ar [ i ]
		else:
			if i == a - 1:
				min = ar [ i ] - ar [ i - 1 ]
			else:
				min = min ( ar [ i ] - ar [ i - 1 ], ar [ i + 1 ] - ar [ i ] )
		print ( min + " " + max )
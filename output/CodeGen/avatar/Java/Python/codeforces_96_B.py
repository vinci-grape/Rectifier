def main ( ):
	in = raw_input ( )
	number = long ( in )
	ans = - 1
	value = 0
	mask = 2
	while value < number:
		s = bin ( mask )[2:]
		zeros = 0
		for c in s:
			if c == '0':
				zeros += 1
		if zeros!= len ( s ) - zeros:
			continue
		s = s.replace ( '0', '4' )
		s = s.replace ( '1', '7' )
		value = long ( s )
		ans = value
	print ans

def bin ( n ):
	return '{0:b}'.format ( n )

main ( )
def main ():
    try:
        in = open ( 'in.txt', 'r' )
        str = in.readline ().split ('' )
        h = int ( str [ 0 ] )
        a = int ( str [ 1 ] )
        num = 0
        for i in range ( 1, h + 1 ):
            h = h - a
            num += 1
        print ( num )
    except IOError:
        print ( 'No input file' )

# Run the program
main ()
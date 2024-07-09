def main ( ):
    scan = input ( )
    n = scan.next ( )
    k = scan.next ( )
    n += 1
    z = 0
    if n % k!= 0:
        z = k - n % k
    print ( n + z )

# Run the program
main ( )
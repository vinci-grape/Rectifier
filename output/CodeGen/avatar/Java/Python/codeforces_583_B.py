def main ( ):
    in = raw_input ( )
    n = int ( in.next ( ) )
    a = [ int ( in.next ( ) ) for i in range ( n ) ]
    b = [ 0 for i in range ( n ) ]
    s = - 1
    for i in range ( n ):
        a[i] = int ( in.next ( ) )
        b[i] = 0
    tem = 1
    q = 0
    while q!= n:
        s += 1
        if tem == 1:
            for i in range ( n ):
                if a[i] <= q and b[i] == 0:
                    b[i] = 1
                    q += 1
        else:
            for i in range ( n - 1, - 1, - 1 ):
                if a[i] <= q and b[i] == 0:
                    b[i] = 1
                    q += 1
        tem = not tem
    print s
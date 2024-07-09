def main ( ):
    sc = raw_input ( )
    a = int ( sc.next ( ) )
    b = int ( sc.next ( ) )
    count = 0
    while True:
        if a > 0 and b > 0:
            count += 1
            a -= 1
            b -= 1
        else:
            break
    ans = a / 2 + b / 2
    print count, ans

# Run the program
main ( )
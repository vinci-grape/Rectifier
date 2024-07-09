import java.util.* ; import java.io.* ; 
def main ( ):
    sc = java.util.Scanner ( System.in )
    n = sc.nextInt ( )
    a = 0
    b = 0
    c = 0
    for i in range ( 0, n ):
        a += sc.nextInt ( )
    for i in range ( 0, n - 1 ):
        b += sc.nextInt ( )
    for i in range ( 0, n - 2 ):
        c += sc.nextInt ( )
    x = a - b
    y = b - c
    print x
    print y

# Run the program
main ( )
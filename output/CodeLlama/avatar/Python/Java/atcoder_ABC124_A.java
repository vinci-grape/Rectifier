Scanner sc = new Scanner ( System.in );
int a = sc.nextInt ( );
int b = sc.nextInt ( );
int c = 0;
for ( int i = 0 ; i < 2 ; i++ ) {
    c += Math.max ( a , b );
    if ( a >= b ) {
        a--;
    } else {
        b--;
    }
}
System.out.println ( c );
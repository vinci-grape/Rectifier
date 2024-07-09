s = str ( input ( ) )
my_str = ""
for c in s :
    if ( c == '0' || c == '1' ) :
        my_str += c
    else if ( c == 'B' && my_str.length()!= 0 ) :
        my_str = my_str.substring ( 0, my_str.length ( ) - 1 )
print ( my_str )
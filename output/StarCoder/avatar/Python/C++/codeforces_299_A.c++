#include <bits/stdc++.h>
using namespace std;
int main ( ) {
	int n;
	cin >> n;
	vector < int > a ( n );
	for ( int i = 0 ; i < n ; i ++ ) cin >> a [ i ];
	sort ( a.begin ( ), a.end ( ) );
	cout << ( any_of ( a.begin ( ), a.end ( ), [ & ]( int x ) { return x % a [ 0 ] == 0; } )? a [ 0 ] : - 1 ) << endl;
	return 0;
}
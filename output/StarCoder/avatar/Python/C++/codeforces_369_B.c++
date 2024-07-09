#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, k, l, r, sa, sk;
	cin >> n >> k >> l >> r >> sa >> sk;
	vector <int> ans;
	for ( int i = 0 ; i < k ; i++ )
		ans.push_back ( ( sk + i ) / k + 1 );
	for ( int i = 0 ; i < n - k ; i++ )
		ans.push_back ( ( sa - sk + i ) / ( n - k ) + 1 );
	cout << ans.size ( ) << endl;
	for ( int i = 0 ; i < ans.size ( ) ; i++ )
		cout << ans [ i ] << " ";
	return 0;
}
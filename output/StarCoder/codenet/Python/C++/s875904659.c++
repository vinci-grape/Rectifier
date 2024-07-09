#include <bits/stdc++.h>
using namespace std;

void bubbleSort( int n, int cards[][2] ) {
	for( int i = 0; i < n; i++ ) {
		for( int j = n-1; j > i; j-- ) {
			if( cards[j][1] < cards[ j-1 ][1] ) {
				int temp = cards[j][1];
				cards[j][1] = cards[ j-1 ][1];
				cards[ j-1 ][1] = temp;
			}
		}
	}
}

void selectionSort( int n, int cards[][2] ) {
	for( int i = 0; i < n; i++ ) {
		int mini = i;
		for( int j = i; j < n; j++ ) {
			if( cards[j][1] < cards[ mini ][1] ) {
				mini = j;
			}
		}
		if( mini!= i ) {
			int temp = cards[i][1];
			cards[i][1] = cards[ mini ][1];
			cards[ mini ][1] = temp;
		}
	}
}

int main() {
	int n;
	cin >> n;
	int cards[n][2];
	for( int i = 0; i < n; i++ ) {
		cin >> cards[i][0] >> cards[i][1];
	}
	bubbleSort( n, cards );
	cout << "Stable" << endl;
	selectionSort( n, cards );
	if( " ".join( map( to_string, cards ) ) == " ".join( map( to_string, cards2 ) ) ) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}
	return 0;
}
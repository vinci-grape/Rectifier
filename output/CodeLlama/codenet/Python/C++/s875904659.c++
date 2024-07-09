#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void bubbleSort( string cards[] ) {
	int n = sizeof( cards ) / sizeof( cards[0] );
	for ( int i = 0; i < n; i++ ) {
		for ( int j = n - 1; j > i; j-- ) {
			if ( cards[j][1] < cards[j - 1][1] ) {
				swap( cards[j], cards[j - 1] );
			}
		}
	}
	for ( int i = 0; i < n; i++ ) {
		cout << cards[i] << " ";
	}
	cout << endl;
}

void selectionSort( string cards[] ) {
	int n = sizeof( cards ) / sizeof( cards[0] );
	for ( int i = 0; i < n; i++ ) {
		int mini = i;
		for ( int j = i; j < n; j++ ) {
			if ( cards[j][1] < cards[mini][1] ) {
				mini = j;
			}
		}
		if ( mini != i ) {
			swap( cards[i], cards[mini] );
		}
	}
	for ( int i = 0; i < n; i++ ) {
		cout << cards[i] << " ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	string cards[n];
	for ( int i = 0; i < n; i++ ) {
		cin >> cards[i];
	}
	bubbleSort( cards );
	cout << "Stable" << endl;
	selectionSort( cards );
	if ( cards[0] == "Ace" ) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}
	return 0;
}
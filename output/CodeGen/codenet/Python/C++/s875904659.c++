#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Card {
public:
	int suit;
	int value;
	Card( int suit_, int value_ ) : suit( suit_ ), value( value_ ) {}
	friend ostream& operator<<( ostream& os, const Card& c ) {
		return os << c.suit << " " << c.value;
	}
};

class CardVector {
public:
	vector<Card> cards;
	CardVector( ) {
		cards.reserve( 5 );
	}
	void addCard( int suit, int value ) {
		cards.push_back( Card( suit, value ) );
	}
	void bubbleSort( ) {
		int n = cards.size( );
		for ( int i = 0; i < n; ++i ) {
			for ( int j = 0; j < n-1; ++j ) {
				if ( cards[j].value < cards[ j+1 ].value ) {
					swap( cards[j], cards[ j+1 ] );
				}
			}
		}
	}
	void selectionSort( ) {
		int n = cards.size( );
		for ( int i = 0; i < n; ++i ) {
			int mini = i;
			for ( int j = i; j < n; ++j ) {
				if ( cards[j].value < cards[ mini ].value ) {
					mini = j;
				}
			}
			if ( mini!= i ) {
				swap( cards[i], cards[ mini ] );
			}
		}
	}
	void print( ) {
		for ( int i = 0; i < cards.size( ); ++i ) {
			cout << cards[i] << endl;
		}
	}
};

int main( ) {
	CardVector cv;
	cv.addCard( 1, 2 );
	cv.addCard( 2, 3 );
	cv.addCard( 3, 4 );
	cv.addCard( 4, 5 );
	cv.addCard( 5, 6 );
	cv.addCard( 6, 7 );
	cv.addCard( 7, 8 );
	cv.addCard( 8, 9 );
	cv.addCard( 9, 10 );
	cv.addCard( 10, 11 );
	cv.addCard( 11, 12 );
	cv.addCard( 12, 13 );
	cv.addCard( 13, 14 );
	cv.addCard( 14, 15 );
	cv.addCard( 15, 16 );
	cv.addCard( 16, 17 );
	cv.addCard( 17, 18 );
	cv.addCard( 18, 19 );
	cv.addCard( 19, 20 );
	cv.addCard( 20, 21 );
	cv.addCard( 21, 22 );
	cv.addCard( 22, 23 );
	cv.addCard( 23, 24 );
	cv.addCard( 24, 25 );
	cv.addCard( 25, 26 );
	cv.addCard( 26, 27 );
	cv.addCard( 27, 28 );
	cv.addCard( 28, 29 );
	cv.addCard( 29, 30 );
	cv.addCard( 30, 31 );
	cv.addCard( 31, 32 );
	cv.addCard( 32, 33 );
	cv.addCard( 33, 34 );
	cv.addCard( 34, 35 );
	cv.addCard( 35, 36 );
	cv.addCard( 36, 37 );
	cv.addCard( 37, 38 );
	cv.addCard( 38, 39 );
	cv.addCard( 39, 40 );
	cv.addCard( 40, 41 );
	cv.addCard( 41, 42 );
	cv.addCard( 42, 43 );
	cv.addCard( 43, 44 );
	cv.addCard( 44, 45 );
	cv.addCard( 45, 46 );
	cv.addCard( 46, 47 );
	cv.addCard( 47, 48 );
	cv.addCard( 48, 49 );
	cv.addCard( 49, 50 );
	cv.addCard( 50, 51 );
	cv.addCard( 51, 52 );
	cv.addCard( 52, 53 );
	cv.addCard( 53, 54 );
	cv.addCard( 54, 55 );
	cv.addCard( 55, 56 );
	cv.addCard( 56, 57 );
	cv.addCard( 57, 58 );
	cv.addCard( 58, 59 );
	cv.addCard( 59, 60 );
	cv.addCard( 60, 61 );
	cv.addCard( 61, 62 );
	cv.addCard( 62, 63 );
	cv.addCard( 63, 64 );
	cv.addCard( 64, 65 );
	cv.addCard( 65, 66 );
	cv.addCard( 66, 67 );
	cv.addCard( 67, 68 );
	cv.addCard( 68, 69 );
	cv.addCard( 69, 70 );
	cv.addCard( 70, 71 );
	cv.addCard( 71, 72 );
	cv.addCard( 72, 73 );
	cv.addCard( 73, 74 );
	cv.addCard( 74, 75 );
	cv.addCard( 75, 76 );
	cv.addCard( 76, 77 );
	cv.addCard( 77, 78 );
	cv.addCard( 78, 79 );
	cv.addCard( 79, 80 );
	cv.addCard( 80, 81 );
	cv.addCard( 81, 82 );
	cv.addCard( 82, 83 );
	cv.addCard( 83, 84 );
	cv.addCard( 84, 85 );
	cv.addCard( 85, 86 );
	cv.addCard( 86, 87 );
	cv.addCard( 87, 88 );
	cv.addCard( 88, 89 );
	cv.addCard( 89, 90 );
	cv.addCard( 90, 91 );
	cv.addCard( 91, 92 );
	cv.addCard( 92, 93 );
	cv.addCard( 93, 94 );
	cv.addCard( 94, 95 );
	cv.addCard( 95, 96 );
	cv.addCard( 96, 97 );
	cv.addCard( 97, 98 );
	cv.addCard( 98, 99 );
	cv.addCard( 99, 100 );
	cv.addCard( 100, 101 );
	cv.addCard( 101, 102 );
	cv.addCard( 102, 103 );
	cv.addCard( 103, 104 );
	cv.addCard( 104, 105 );
	cv.addCard( 105, 106 );
	cv.addCard( 106, 107 );
	cv.addCard( 107, 108 );
	cv.addCard( 108, 109 );
	cv.addCard( 109, 110 );
	cv.addCard( 110, 111 );
	cv.addCard( 111, 112 );
	cv.addCard( 112, 113 );
	cv.addCard( 113, 114
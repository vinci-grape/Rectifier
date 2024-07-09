#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    string record_of_movements;
    int x, y;
    cout << "Enter the record of movements: ";
    getline ( cin, record_of_movements );
    x = y = 0;
    for ( string::iterator it = record_of_movements.begin ( ) ; it!= record_of_movements.end ( ) ; ++it ) {
        switch ( *it ) {
            case 'L' :
                x += 0;
                y += -1;
                break;
            case 'R' :
                x += 0;
                y += 1;
                break;
            case 'U' :
                x += 1;
                y += 0;
                break;
            case 'D' :
                x += -1;
                y += 0;
                break;
        }
        if ( x < 0 || x >= 10 || y < 0 || y >= 10 ) {
            cout << "BUG" << endl;
            return 0;
        }
        if ( x, y ) not in d :
            for step in d_movement :
                if ( x + d_movement [ step ] [ 0 ], y + d_movement [ step ] [ 1 ] )!= ( x, y ) and ( x + d_movement [ step ] [ 0 ], y + d_movement [ step ] [ 1 ] ) in d :
                    cout << "BUG" << endl;
                    return 0;
        else :
            cout << "OK" << endl;
            return 0;
    }
}
#include <iostream>
using namespace std;

int main ( )
{
    int princess;
    int dragon;
    int t;
    int f;
    int c;
    cout << "Enter the number of princess: ";
    cin >> princess;
    cout << "Enter the number of dragon: ";
    cin >> dragon;
    cout << "Enter the number of test: ";
    cin >> t;
    cout << "Enter the number of final: ";
    cin >> f;
    cout << "Enter the number of condition: ";
    cin >> c;
    if ( dragon <= princess )
    {
        cout << 0 << endl;
        exit ( 0 );
    }
    int result = 0;
    int position = t * princess;
    position += princess * position / ( dragon - princess );
    while ( position < c )
    {
        result += 1;
        position += princess * position / dragon;
        position += princess * f;
        position += princess * position / ( dragon - princess );
    }
    cout << result << endl;
    return 0;
}
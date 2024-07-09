#include <iostream>
using namespace std;

int main ( )
{
    int h, a ;
    cin >> h >> a ;
    int sho = h / a ;
    int am = h % a ;
    if ( am!= 0 )
        sho += 1 ;
    cout << sho << endl ;
    return 0 ;
}
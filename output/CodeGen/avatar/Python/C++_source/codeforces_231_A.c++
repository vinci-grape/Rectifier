#include <iostream>
using namespace std;

int main ( )
{
    int n;
    cin >> n;
    int c = 0;
    for ( int i = 0; i < n; i++ )
    {
        int l1[n];
        for ( int j = 0; j < n; j++ )
        {
            cin >> l1[j];
        }
        if ( sum ( l1 ) > 1 )
        {
            c = c + 1;
        }
    }
    cout << c << endl;
    return 0;
}
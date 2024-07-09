#include <iostream>
using namespace std;

int main ( )
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int l = 1;
    int r = n;
    while ( l < r )
    {
        int mid = l + ( r - l ) / 2;
        int idxcnt = mid * ( mid + 1 ) / 2;
        if ( idxcnt < n )
            l = mid + 1;
        else
            r = mid;
    }
    int idxcnt = l * ( l + 1 ) / 2;
    cout << n - idxcnt << endl;
    return 0;
}
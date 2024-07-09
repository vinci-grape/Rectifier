#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    string m[n];
    for ( int i = 0 ; i < n ; i++ )
        cin >> m[i];
    bool possible = true;
    for ( int i = 0 ; i < n ; i++ )
    {
        int count = 0;
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( m[i] == m[j] )
                count++;
        }
        if ( count >= n / 2 + 1 )
        {
            possible = false;
            break;
        }
    }
    if ( possible )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
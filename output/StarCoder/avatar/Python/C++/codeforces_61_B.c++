#include <bits/stdc++.h>
using namespace std;
int main ( )
{
    int t;
    cin >> t;
    while ( t-- )
    {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        if ( s1 == s2 || s1 == s3 || s2 == s3 )
            cout << "ACC" << endl;
        else
            cout << "WA" << endl;
    }
    return 0;
}
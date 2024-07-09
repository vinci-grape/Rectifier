#include <iostream>
#include <vector>
using namespace std;

int main ( )
{
    int n;
    cin >> n;
    vector < vector < int > > m(n);
    for ( int i = 0; i < n; ++i )
    {
        for ( int j = 0; j < n; ++j )
        {
            cin >> m[i][j];
        }
    }
    sort(m.rbegin(), m.rend(), [](const vector<int>& lhs, const vector<int>& rhs) {
        return lhs[1] > rhs[1];
    });
    int a = m[0][0];
    for ( int i = 1; i < n; ++i )
    {
        if ( m[i][1] > a )
        {
            cout << "Happy Alex" << endl;
            break;
        }
        a = m[i][0];
    }
    else
    {
        cout << "Poor Alex" << endl;
    }
    return 0;
}
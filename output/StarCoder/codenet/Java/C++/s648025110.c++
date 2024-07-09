#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *h = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 0;
    int out = 0;

    for( int i = 0; i < n; i++ ) {
        if( out < h[i] ) {
            ans += h[i] - out;
            out =  h[i];
        }else {
            out = h[i];
        }
    }

    cout << ans << endl;
    return 0;
}
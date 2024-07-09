#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <set>
#include <functional>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <bitset>
#include <deque>
#include <set>
#include <functional>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    int l, r;
    cin >> l >> r;
    for ( int i = 1 ; i <= n ; i ++ ) {
        int li, ri;
        cin >> li >> ri;
        if ( li <= l && r <= ri ) {
            cout << i << endl;
            return 0;
        }
        if ( li < l || r < ri ) {
            cout << - 1 << endl;
            return 0;
        }
        l = min ( l, li );
        r = max ( r, ri );
    }
    cout << - 1 << endl;
    return 0;
}
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cctype>
#include <fstream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n == 0)
    {
        if (m != 0)
            cout << "Impossible" << endl;
        else
            cout << 0 << " " << 0 << endl;
        return 0;
    }
    if (m <= n)
    {
        if (m == 0)
            m = 1;
        cout << n << " " << (m + n - 1) << endl;
        return 0;
    }
    cout << m << " " << (m + n - 1) << endl;
    return 0;
}
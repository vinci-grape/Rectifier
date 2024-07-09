#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <limits>
#include <assert.h>
#include <functional>
using namespace std;

#define INF 0x3F3F3F3F
#define PI 3.1415926535897932384626433832795
#define EPS 1e-10
#define ll long long
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define mp make_pair
#define pb push_back
#define abs(x) (x>0?x:-x)
#define mod 1000000007
#define all(c) c.begin(),c.end()
#define ALL(A) A.begin(), A.end()
#define set_min(a,b) a=min(a,b)
#define set_max(a,b) a=max(a,b)
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);


int32_t main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int K, S;
        cin >> K >> S;
        int ans = 0;
        int wk = 0;
        for (int x = 0; x <= K; x++)
        {
            for (int y = 0; y <= K; y++)
            {
                wk = S - x - y;
                if (wk >= 0 && wk <= K)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
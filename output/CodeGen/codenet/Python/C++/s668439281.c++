#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <climits>
#include <cctype>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, n) for(int i = a; i < n; i++)
#define REV(i, a, n) for(int i = a; i > n; i--)

template<typename T> T gcd(T a, T b) {
    if(!b) return a;
    return gcd(b, a % b);
}
template<typename T> T lcm(T a, T b) {
    return a * b / gcd(a, b);
}

typedef long long ll;
typedef long double ld;

#define MAXN 100010

int n;
string s[MAXN];

int main(void) {
    int i, j;
    while(scanf("%d", &n) == 1 && n) {
        REP(i, n) {
            scanf("%s", s[i].data());
        }
        sort(s, s + n);
        int ans = 0;
        REP(i, n) {
            if(i > 0 && s[i] == s[i - 1]) continue;
            int j = i;
            while(j < n && s[j] == s[i]) j++;
            ans += j - i;
        }
        printf("%d\n", ans);
    }
    return 0;
}
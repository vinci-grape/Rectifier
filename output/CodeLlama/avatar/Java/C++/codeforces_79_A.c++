#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <memory>
#include <iomanip>
#include <numeric>
#include <functional>
#include <new>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <climits>
#include <cctype>
#include <ctime>

#define REP(i, n) for(int (i) = 0; i < n; i++)
#define FOR(i, a, n) for(int (i) = a; i < n; i++)
#define FORR(i, a, n) for(int (i) = a; i <= n; i++)
#define for_each(q, s) for(typeof(s.begin()) q=s.begin(); q!=s.end(); q++)
#define sz(n) n.size()
#define pb(n) push_back(n)
#define all(n) n.begin(), n.end()

template<typename T> T gcd(T a, T b) {
    if(!b) return a;
    return gcd(b, a % b);
}
template<typename T> T lcm(T a, T b) {
    return a * b / gcd(a, b);
}

using namespace std;

typedef long long ll;
typedef long double ld;

int x, y, turn;

bool canTake(int xNeeded, int xAvailable, int yNeeded, int yAvailable) {
    if (xNeeded > xAvailable) return false;
    if (yNeeded > yAvailable) return false;
    return true;
}

int main(void) {
    scanf("%d %d", &x, &y);
    turn = 0;
    while (true) {
        if (turn % 2 == 0) {
            if (canTake(2, x, 2, y)) {
                x -= 2;
                y -= 2;
            } else if (canTake(1, x, 12, y)) {
                x -= 1;
                y -= 12;
            } else if (canTake(0, x, 22, y)) {
                y -= 22;
            } else {
                printf("Hanako\n");
                return 0;
            }
        } else {
            if (canTake(0, x, 22, y)) {
                y -= 22;
            } else if (canTake(1, x, 12, y)) {
                x -= 1;
                y -= 12;
            } else if (canTake(2, x, 2, y)) {
                x -= 2;
                y -= 2;
            } else {
                printf("Ciel\n");
                return 0;
            }
        }
        turn++;
    }
    return 0;
}
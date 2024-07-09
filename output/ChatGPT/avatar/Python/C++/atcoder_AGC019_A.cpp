#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <iomanip>
#include <functional>
#include <numeric>
#include <cassert>
#include <bitset>
#include <ctime>
#include <iterator>
#include <complex>
#include <stdint.h>
using namespace std;

int q, h, s, d, n;
int main() {
    cin >> q >> h >> s >> d;
    cin >> n;
    int best1L = min(q * 4, min(h * 2, s));
    int best2L = min(d, best1L * 2);
    if (n % 2 == 0) {
        cout << best2L * (n / 2) << endl;
    } else {
        cout << best2L * (n / 2) + best1L << endl;
    }
    return 0;
}
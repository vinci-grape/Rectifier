#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <valarray>
#include <cmath>
#include <utility>
#include <algorithm>
#include <complex>
#include <iomanip>
#include <cstdlib>
#include <locale>
#include <ctype.h>
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we want to debug

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

int main() {
    int a, b, digit;
    while(scanf("%d %d", &a, &b) && a+b) {
        digit = (int) log10(a+b) + 1;
        printf("%d\n", digit);
    }
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <string>
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
#include <utility>
#include <sstream>
#include <iomanip>
#include <ostream>
#include <stdbool.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define MAX 1005

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    int count = 0;
    for(int i=1;i<=n;i++)
        if(v[i-1]<=v[i])
            count++;
    cout << count << endl;
    return 0;
}
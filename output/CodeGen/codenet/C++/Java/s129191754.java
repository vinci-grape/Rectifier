#include <iostream>
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <cassert>

#define REP(i,n) for(int i=0;i<n;i++)
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define eb emplace_back

typedef long long ll;
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    // cout << fixed << setprecision(20);
    int n;cin >> n;
    vector<int> a(n);REP(i,n)cin >> a[i];
    sort(all(a));
    REP(i,n-1){
        if(a[i] == a[i+1]){
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
        
    return 0;
}
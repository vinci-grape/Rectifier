#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cctype>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <list>
#include <deque>
#include <functional>
#include <bitset>
#include <utility>
#include <cassert>
#include <ctime>
#include <cstdlib>
using namespace std;

#define DEBUG

#ifdef DEBUG
#define DEBUG_MSG(str) {cout<<str<<endl;}
#else
#define DEBUG_MSG(str)
#endif

#define pb push_back
#define mp make_pair
#define clr clear()
#define sz size()
#define sp setprecision
#define fx fixed
#define pf printf
#define ff first
#define ss second
#define bgn begin()
#define end end()
#define emp empty()
#define sz(c) ((int)((c).size()))
#define rep(i,n) for(i=0;i<(n);i++)
#define rep1(i,n) for(i=1;i<=(n);i++)
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define FORR(i,n) for(i=n;i>=1;i--)
#define for01(i,n) for(i=0;i<(n);i++)
#define sz1(c) ((int)((c).size()))
#define sz2(c) ((int)((c).size()))
#define INF 1000000
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 1000000

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main() {
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int count=0;
    for(int i=0;i<n;i++)
        if(arr[i]==a)
            count++;
    if(count==n)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
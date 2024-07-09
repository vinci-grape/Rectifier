#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cassert>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <list>
#include <set>
#include <stack>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <sstream>
#include <iomanip>
#include <new>
using namespace std;

#define mp make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define forn(i,n) for(int i=0,i##e=n;i<i##e;++i)
#define fori(i,m) for(int i=0,i##e=m.size();i<i##e;++i)
#define forj(j,m) for(int j=0,j##e=m.size();j<j##e;++j)
#define fork(k,m) for(int k=0,k##e=m.size();k<k##e;++k)
#define forl(l,m) for(int l=0,l##e=m.size();l<l##e;++l)
#define fors(s,m) for(auto s=m.begin(),s##e=m.end();s!=s##e;++s)
#define forss(s,m) for(auto s=m.cbegin(),s##e=m.cend();s!=s##e;++s)
#define INF 1000000
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 1000000
#define INF 1000000
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> int size(T &x) { return x.size(); }

int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a[n],b[m];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    int sum=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i]>b[j])
                sum++;
    if(sum==k)
        printf("Happy Alex\n");
    else
        printf("Poor Alex\n");
    return 0;
}
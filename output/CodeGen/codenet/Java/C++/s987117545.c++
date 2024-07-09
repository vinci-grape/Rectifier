#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cassert>
#include <ctype.h>
#include <string.h>
#include <set>
#include <map>
#include <queue>
#include <iomanip>
#include <functional>
#include <sstream>
#include <utility>
#include <list>
#include <stack>
#include <memory.h>
#include <ctype.h>
#include <stdio.h>
#include <math.h>
#define pi acos(-1.0)
#define scan(x) scanf("%d",&x)
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MAX 100
#define EPS 1e-9
#define inf 0x7fffffff
#define MOD 1000000007
using namespace std;

int main() {
    int t;
    scan(t);
    while(t--){
        long n,k;
        scan(n);
        scan(k);
        long ans = 0;
        for(long i=k;i<=n+1;i++){
            long max = i*(2*n-i+1)/2;
            long min = i*(i-1)/2;
            ans += (max - min + 1) % MOD;
        }
        pf("%ld\n",ans);
    }
    return 0;
}
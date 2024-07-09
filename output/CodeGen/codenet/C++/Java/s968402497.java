#pragma GCC optimize(2)
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue> //priority_queue<int, vector<int>, greater<int> > q;
#include <map>
#include <set> //multiset set<int,greater<int>>大到小
#include <vector>// vector<int>().swap(v);清空释放内存
#include <stack>
#include <cmath> // auto &Name : STLName  Name.
#include <utility>
#include <sstream>
#include <string>//__builtin_popcount(ans);//获取某个数二进制位1的个数
#define mod 1000000007
#define mod9 998244353
#define ld long double
#define ull unsigned long long
#define db double
#define ll long long
const db eps=1e-7;
//const db pi=acos(-1);
const int INF = 0x3f3f3f3f;
const ll inf=0x3f3f3f3f3f3f3f3f;
#define rep(i,be,en) for (ll i=be;i<=en;i++)
#define per(i,be,en) for (int i=en;i>=be;i--)
using namespace std;
const int N=1e5+7;

int tc,n,m,fl=0;

int main(){
    scanf("%d%d%d",&tc,&n,&m);
    if(n>m) swap(n,m);
    for(int i=1;i<=m;i++){
        if(i*tc>=n&&i*tc<=m){
            printf("OK\n");
            fl=1;
            break;
        }
    }
    if(fl==0) puts("NG");
    return 0;
}
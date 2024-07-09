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
#include <ctime>
#include <cstdlib>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define pff pair<float,float>
#define piii pair<ll, pair<int,int> >
#define pddd pair<ld, pair<ld,ld> >
#define ff first
#define ss second
#define MAXN 1005
#define MOD 1000000007
#define LL long long
#define eps 1e-9
#define inf 0x3f3f3f3f
using namespace std;
int main(){
    int n,m,k,i,j,l,r,a,b,c,d,e,f,g,h,s,t,u,v,w,x,y,z,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
    while(scanf("%d%d%d",&n,&m,&k)!=EOF){
        int a[n][m];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                a[i][j]=a[i][j]%k;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
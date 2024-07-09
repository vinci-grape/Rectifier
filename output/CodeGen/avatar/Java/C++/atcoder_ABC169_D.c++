#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <cassert>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

const int MAXN = 100010;

int n,m;
int a[MAXN];
int b[MAXN];
int c[MAXN];

int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 0;i<n;i++) scanf("%d",&a[i]);
    for(int i = 0;i<m;i++) scanf("%d",&b[i]);
    for(int i = 0;i<m;i++) scanf("%d",&c[i]);
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        int sum = 0;
        for(int j = 0;j<m;j++)
        {
            sum += a[i]*b[j];
        }
        if(sum == c[0])
        {
            ans++;
        }
    }
    printf("%d\n",ans);
}
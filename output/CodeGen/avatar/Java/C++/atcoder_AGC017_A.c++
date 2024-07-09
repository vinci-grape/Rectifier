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
#include <list>
#include <stack>
#include <memory>
#include <iomanip>
#include <functional>
#include <new>
using namespace std;
#define mp make_pair
#define pb push_back
#define INF 1000000000000
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> int size(T &x) { return x.size(); }

int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    int k0=0,k1=0;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x%2==1)k1++;
        else k0++;
    }
    if(p==0){
        int add=0;
        for(int i=0;i<=k1;i+=2)add+=C(i,k1);
        printf("%d\n",add);
    }
    else{
        int add=0;
        for(int i=1;i<=k1;i+=2)add+=C(i,k1);
        printf("%d\n",add);
    }
    return 0;
}
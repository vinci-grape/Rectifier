#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define IN(x) scanf("%d",&x)
#define OUT(x) printf("%d\n",x)
#define INL(x) scanf("%lld",&x)
#define OUTL(x) printf("%lld\n",x)
#define MAX 1000000

int main(){
    int t;
    IN(t);
    while(t--){
        int n,m;
        IN(n);IN(m);
        int a[n];
        for(int i=0;i<n;i++)
            IN(a[i]);
        int b[m];
        for(int i=0;i<m;i++)
            IN(b[i]);
        sort(a,a+n);
        sort(b,b+m);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]==b[j]){
                    ans++;
                    break;
                }
            }
        }
        OUT(ans);
    }
    return 0;
}
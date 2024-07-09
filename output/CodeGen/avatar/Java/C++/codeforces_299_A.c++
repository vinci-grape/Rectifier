#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll long long

ll a[100005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    ll min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]%min!=0)
            return -1;
        min=min*a[i];
    }
    printf("%lld\n",min);
    return 0;
}
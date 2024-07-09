#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    if(n==0 && m==0)
        printf("Impossible");
    else if(m<=n)
        printf("%d %d",n,m+n-1);
    else
        printf("%d %d",m,n+m-1);
    return 0;
}
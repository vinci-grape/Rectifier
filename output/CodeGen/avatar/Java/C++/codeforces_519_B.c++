#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        a+=b;
        b+=c;
        c+=a;
    }
    int x=a-b,y=b-c;
    printf("%d %d",x,y);
    return 0;
}
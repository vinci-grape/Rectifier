#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    long *a = new long[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    sort(a,a+n);
    long count = a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            count += a[i];
        }else{
            while(a[i]>=a[i+1]){
                a[i]--;
            }
            if(a[i]>0){
                count += a[i];
            }
        }
    }
    printf("%ld\n",count);
    return 0;
}
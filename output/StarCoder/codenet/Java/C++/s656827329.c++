#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count = 1;
    int now = 0;
    int bef = 0;
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i]){
            now = 1;
        }else if(a[i-1]>a[i]){
            now = -1;
        }else{
            continue;
        }
        if(bef == 0){
            bef = now;
        }
        if(bef!= now){
            count++;
            bef = 0;
        }
    }
    cout<<count;
    return 0;
}
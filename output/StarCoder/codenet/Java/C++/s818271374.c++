#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a%4==0){
            count1++;
        }else if(a%2==0 && (a/2)%2==1){
            count2++;
        }
    }
    if(count1>=n/2){
        cout<<"Yes";
    }else if(((n/2-count1)*2+n%2)==count2){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
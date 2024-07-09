#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)

int main(){
    int n;
    ll arr[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll result=1;
    for(int i=1;i<n;i++){
        result*=arr[i]-arr[i-1];
    }
    cout<<result<<endl;
    return 0;
}
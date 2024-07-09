#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ve[n/2];
    int vo[n/2];
    for(int i=0;i<n/2;i++){
        ve[i]=v[2*i];
        vo[i]=v[2*i+1];
    }
    map<int,int> ce;
    map<int,int> co;
    for(int i=0;i<n/2;i++){
        ce[ve[i]]++;
        co[vo[i]]++;
    }
    int ans=n;
    if(ce.begin()->first!=co.begin()->first){
        ans=n-ce.begin()->second-co.begin()->second;
    }
    else if(ce.size()==1 && co.size()==1){
        ans=n-ce.begin()->second;
    }
    else if(ce.size()==1){
        ans=n-ce.begin()->second-co.rbegin()->second;
    }
    else if(co.size()==1){
        ans=n-ce.rbegin()->second-co.begin()->second;
    }
    else{
        ans=min(n-ce.begin()->second-co.rbegin()->second,n-ce.rbegin()->second-co.begin()->second);
    }
    cout<<ans<<endl;
    return 0;
}
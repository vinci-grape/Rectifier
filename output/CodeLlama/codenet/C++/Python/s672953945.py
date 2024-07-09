#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,L;
    cin>>N>>L;
    vector<string> v;
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr.begin(), arr.end(), greater<int>());
    if(n>=3){
        long long ans=arr[0]+arr[1];
        map<pair<int, int>, int> mp;
        mp[make_pair(arr[0], arr[1])]=1;
        pair<int, int> p1=make_pair(arr[2], arr[1]), p2=make_pair(arr[2], arr[0]);
        mp[p1]++; mp[p2]++;
        for(int i=3; i<n; i++){
            pair<int, int> p=mp.begin()->first;
            mp.erase(mp.begin());
            ans+=min(p
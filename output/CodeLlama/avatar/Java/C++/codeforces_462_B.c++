#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
struct card{
    int left;
    bool operator<(const card& a) const{
        return left<a.left;
    }
}cards[26];
int main(){
    int n,k;
    cin>>n>>k;
    char s[100000];
    scanf("%s",s);
    for(int i=0;i<n;i++){
        cards[s[i]-'A'].left++;
    }
    long long ans=0;
    for(int i=0;i<k;i++){
        sort(cards,cards+26);
        long long change=min(cards[25].left,k-i);
        ans+=change*change;
        cards[25].left-=change;
        i+=change-1;
    }
    cout<<ans<<endl;
    return 0;
}
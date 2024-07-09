#include <iostream>
using namespace std;
typedef long long ll;
ll n,k,ans,L,ans2;
string s;

int main(void){
    cin>>n>>k;
    cin>>s;
    L=s[0];
    ll cnt=0;
    for(int i=1;i<n;i++){
        if(L==s[i])cnt++;
        else {
            L=s[i];
            ans+=cnt;
            ans2++;
            cnt=0;
        }
    }
    ans+=cnt;
    ans2++;
    print(ans+min(2*k,ans2-1))
    }
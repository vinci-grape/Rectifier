#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    int R = N - K;
    int mod = 1000000007;
    for(int i=1;i<=K;i++)
    {
        if(N-K+1<i)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<((R+1)*(K-1))%mod<<endl;
        }
    }
    return 0;
}
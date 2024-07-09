#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long startTime = clock();
    long long div = pow(10,9)+7;
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    long long ans=0;
    for(int i=0;i<60;i++){
        long long a=0;
        long long count1=0;
        for(int j=0;j<n;j++){
            if((A[j]>>i&1)==1) count1++;
        }
        a=a+count1*(n-count1);
        for(int j=0;j<i;j++){
            a=(a<<1)%div;
        }
        ans+=a;
        ans%=div;
    }
    cout<<ans<<endl;
    long long endTime = clock();
    cout<<"Time taken: "<<(double)(endTime-startTime)/CLOCKS_PER_SEC<<"s";
}
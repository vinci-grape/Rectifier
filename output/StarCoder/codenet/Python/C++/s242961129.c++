#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n+1];
for(int i=0;i<n;i++)
cin>>a[i];
int ans=abs(a[n-1]);
a[n]=a[0];
for(int i=0;i<n;i++)
{
int diff=abs(a[i]-a[i+1])-abs(a[i]-a[i-1]);
ans+=abs(a[i]-a[i+1]);
cout<<ans-diff<<endl;
}
return 0;
}
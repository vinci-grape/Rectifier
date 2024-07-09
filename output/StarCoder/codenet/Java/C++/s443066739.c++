#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long pre[n+1];
	
	for(int i=1;i<=n;i++)
	{
		cin>>pre[i];
	}
	
	long long min=1000000000000000000;
	
	for(int i=1;i<n;i++)
	{
		long long val1=pre[i],val2=pre[n]-pre[i];
		
		min=min(min,abs(val1-val2));
	}
	
	cout<<min<<endl;
}
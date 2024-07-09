#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		m[x]++;
	}
	int ans=0;
	for(auto it=m.begin();it!=m.end();it++)
	{
		int val=it->first;
		int num=it->second;
		if(num>val)
			ans+=num-val;
		else if(num<val)
			ans+=num;
	}
	cout<<ans<<endl;
	return 0;
}
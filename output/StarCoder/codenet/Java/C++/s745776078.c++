#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int A[n][m],b[m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)cin>>A[i][j];
	}
	for(int i=0;i<m;i++)cin>>b[i];
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<m;j++)c+=A[i][j]*b[j];
		cout<<c<<endl;
	}
	return 0;
}
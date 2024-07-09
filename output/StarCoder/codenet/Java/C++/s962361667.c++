#include <iostream>
using namespace std;
int main()
{
	int w,n,i,x;
	cin>>w>>n;
	int values[w];
	for(i=0;i<w;i++)
	{
		values[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		x=values[a];
		values[a]=values[b];
		values[b]=x;
	}
	for(i=0;i<w;i++)
	{
		cout<<values[i]<<endl;
	}
	return 0;
}
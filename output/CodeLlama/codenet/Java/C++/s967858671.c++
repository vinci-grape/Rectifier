#include <iostream>
using namespace std;
int main()
{
	int Num[11],i,a,b;
	for(i=0;i<10;i++)
	{
		cin>>Num[i];
	}
	for(a=9;a>=0;a--)
	{
		for(b=0;b<a;b++)
		{
			if(Num[b]<Num[b+1])
			{
				Num[10]=Num[b];
				Num[b]=Num[b+1];
				Num[b+1]=Num[10];
			}
		}
	}
	cout<<Num[0]<<endl;
	cout<<Num[1]<<endl;
	cout<<Num[2]<<endl;
	return 0;
}
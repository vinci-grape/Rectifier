#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll long long
#define ull unsigned long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define MAX 1000005

int arr[MAX];
int n,k;
int o=0,e=0;

int main()
{
	int t=0;
	while(sc("%d%d",&n,&k)==2)
	{
		t++;
		for(int i=0;i<n;i++)
			sc("%d",&arr[i]);
		sort(arr,arr+n);
		o=0,e=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
				o++;
			else
				e++;
			if(o==k)
				pf("1\n");
			else if(e==k)
				pf("0\n");
			else
				pf("0\n");
		}
	}
	return 0;
}
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;

#define INF 1000000000

int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
	sort(a,a+n);
	sort(b,b+n);
	int left=INF,right=0;
	for(int i=0;i<n;i++)
	{
		if(left==a[i]&&right==b[i])
		{
			printf("%d\n",i+1);
			return 0;
		}
		else if(left>a[i])
			left=a[i];
		else if(right<b[i])
			right=b[i];
	}
	printf("-1\n");
	return 0;
}
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
const int M=1010;
char a[M],b[M];
int n,m,ans=M+10;

int main()
{
	
	scanf("%s",a+1);n=strlen(a+1);
	scanf("%s",b+1);m=strlen(b+1);
	for i in range(1,n-m+2):
		sum=0
		for j in range(1,m+1):
			if a[i+j-1]!=b[j]:
				sum+=1
		ans=min(ans,sum)
	print(ans)
	
	return 0;
	
}
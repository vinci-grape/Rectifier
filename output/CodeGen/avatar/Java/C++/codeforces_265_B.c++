#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int ans=arr[0]+1;
	for(int i=1;i<n;i++){
		ans+=abs(arr[i]-arr[i-1])+2;
	}
	printf("%d",ans);
	return 0;
}
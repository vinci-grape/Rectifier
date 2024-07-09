#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int l=0,r=0;
	bool flag=false;
	bool isTrue=false;
	for(int i=0;i<n;i++){
		if(a[i]!=i+1&&!flag){
			l=i+1;
			flag=true;
			continue;
		}
		if(a[i]!=i+1&&flag){
			r=i+1;
			if(a[r-1]-a[r-2]>0){
				isTrue=true;
				break;
			}
		}
	}
	if(!isTrue)
		printf("%d %d",l,r);
	else
		printf("0 0");
	return 0;
}
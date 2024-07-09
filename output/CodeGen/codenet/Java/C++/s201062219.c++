#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main() {
	int c,b,a[100000];
	int x=0;
	scanf("%d",&c);
	char mark;
	scanf("%c",&mark);
	scanf("%d",&b);
	if(mark=='?') {
		a[x]=2000001;
		break;
	}
	else if(mark=='+') {
		a[x]=c+b;
	}
	else if(mark=='-') {
		a[x]=c-b;
	}
	else if(mark=='*') {
		a[x]=c*b;
	}
	else if(mark=='/') {
		a[x]=c/b;
	}
	x++;
	while(true) {
		if(a[x]==2000001) break;
		cout<<a[x]<<endl;
		x++;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main() {
	int i=0;
	
	for(i=1;i<=5;i++) {
		int n;
		cin>>n;
		if(n==0) {
			break;
		}
	}
	
	cout<<i;
	
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int numlist[5];
	int k;
	
	for(int i=0;i<5;i++){
		cin>>numlist[i];
	}
	cin>>k;
	
	if((numlist[4] - numlist[0])>k){
		cout<<":(";
	}else{
		cout<<"Yay!";
	}
}
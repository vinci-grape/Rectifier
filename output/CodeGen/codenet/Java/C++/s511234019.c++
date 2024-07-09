#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	a=0;
	b=0;
	cout<<"Enter the number of the first digit: ";
	cin>>a;
	cout<<"Enter the number of the second digit: ";
	cin>>b;
	if(a%2==0 || b%2==0 )
		cout<<"No";
	else
		cout<<"Yes";
	return 0;
}
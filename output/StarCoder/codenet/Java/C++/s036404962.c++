#include <bits/stdc++.h>

using namespace std;

int main()
{
	int X, t;
	cin>>X>>t;
	
	if(X>=t){
		cout<<X-t;
	} else if (X<t){
		cout<<0;
	}
	
	return 0;
}
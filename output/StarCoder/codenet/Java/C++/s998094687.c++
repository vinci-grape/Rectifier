#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
	    int a[3];
	    for(int i=0;i<3;i++) cin>>a[i];
	    sort(a,a+3);
	    if(pow(a[2],2)==pow(a[0],2)+pow(a[1],2)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
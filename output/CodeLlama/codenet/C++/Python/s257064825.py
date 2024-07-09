#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cmath>
using namespace std;
#define int long long int
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin>>str;
	int sum=0;
	for(char x:str)
	{
		sum+=(x-48);
	}
	if(sum%9==0)
	{
        print("Yes")
	}
	else
	   print("No")
}
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cstdint>
#include <sstream>
#include <map>
#include<vector>

using namespace std;
typedef long long ll;

ll ans,mx,sum,mn=1e8,cnt=1;

int main(){
	ll h;
	cin>>h;
	while(h!=1):
		if(h%2!=0) h--;
		h/=2;
		cnt*=2;
		ans+=cnt;
	print(ans+1)
}
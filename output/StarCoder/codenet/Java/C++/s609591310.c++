#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	int list[n];
	for(int i=0; i<n; i++){
		cin >> list[i];
	}
	
	int numlist1[100000], numlist2[100000];
	for(int i=0; i<100000; i++){
		numlist1[i] = 0;
		numlist2[i] = 0;
	}
	
	for(int i=0; i<n; i+=2){
		numlist1[list[i]-1] += 1;
		numlist2[list[i+1]-1] += 1;
	}
	
	int max11=0, max12=0, max21=0, max22=0;
	int val1=0, val2=0;
	for(int i=0; i<100000; i++){
		if(numlist1[i] >= max11){
			max12 = max11;
			max11 = numlist1[i];
			val1 = i;
		}
		else if(numlist1[i] >= max12){
			max12 = numlist1[i];
		}
		if(numlist2[i] >= max21){
			max22 = max21;
			max21 = numlist2[i];
			val2 = i;
		}
		else if(numlist2[i] >= max22){
			max22 = numlist2[i];
		}
	}
	
	if(val1!= val2){
		ans = n - max11 - max21;
	}
	else{
		ans = n - max(max12+max21, max11+max22);
	}
	
	cout << ans << endl;
	return 0;
}
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	string s;
	getline(cin, s);
	stringstream ss(s);
	for (int i = 0; i < n; i++){
		ss >> a[i];
	}
	
	int swapCount = 0;
	
	for(int i = 0; i < n; i++){
		int mini = i;
		
		for(int j = i; j < n; j++){
			if(a[j] < a[mini]){
				mini = j;
			}
		}
		
		if (mini != i){
			int v = a[mini];
			a[mini] = a[i];
			a[i] = v;
			
			swapCount++;
		}
	}
	
	string ans = to_string(a[0]);
	for (int i = 1; i < n; i++){
		ans += " " + to_string(a[i]);
	}
	
	cout << ans << endl;
	cout << swapCount << endl;
	
	return 0;
}
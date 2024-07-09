#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Main {
public:
	int t;
	int count[10001];
	Main(){
		t=0;
	}
	void input(){
		cin>>t;
		for(int i=1;i<=t;i++)
			cin>>count[i];
	}
	void output(){
		for(int i=1;i<=t;i++)
			cout<<count[i]<<" ";
		cout<<endl;
	}
	void solve(){
		for(int i=2;i<=t;i++)
			count[i]+=count[i-1];
		for(int i=1;i<=t;i++)
			cout<<count[i]<<" ";
		cout<<endl;
	}
};
int main(){
	Main m;
	m.input();
	m.solve();
	m.output();
	return 0;
}
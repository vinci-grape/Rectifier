#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	stringstream ss(s);
	int a,b;
	ss>>a>>b;
	if(b%a==0){
		cout<<a+b<<endl;
	}else{
		cout<<b-a<<endl;
	}
	return 0;
}
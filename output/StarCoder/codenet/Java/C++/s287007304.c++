#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	int a = atoi(s.substr(0, s.find(" ")).c_str());
	int b = atoi(s.substr(s.find(" ")+1, s.length()).c_str());
	if(b%a==0){
		cout<<a+b<<endl;
	}else{
		cout<<b-a<<endl;
	}
	return 0;
}
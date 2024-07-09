#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,t;
	cin >> s >> t;
	bool check = false;
	for(int i=s.length()-t.length();i>=0;i--){
		bool check2 = true;
		for(int j=0;j<t.length();j++){
			if(s[i+j] != '?' && s[i+j] != t[j]){
				check2 = false;
			}
		}
		if(check2){
			check = true;
			for(int j=0;j<t.length();j++){
				s[i+j] = t[j];
			}
		}
		if(check){
			break;
		}
	}
	if(check){
		for(int i=0;i<s.length();i++){
			if(s[i] == '?'){
				cout << "a";
			}else{
				cout << s[i];
			}
		}
		cout << endl;
	}else{
		cout << "UNRESTORABLE" << endl;
	}
}
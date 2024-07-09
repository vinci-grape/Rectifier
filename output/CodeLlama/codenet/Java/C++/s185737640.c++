#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	if(s.length() % 2 == 1){
		s = s.substr(0, s.length() - 1);
	}
	else{
		s = s.substr(0, s.length() - 2);
	}
	for(; s.length() > 0; s = s.substr(0, s.length() - 2)){
		if(isEvenString(s)){
			break;
		}
	}
	cout << s.length() << endl;
}

//長さが偶数の文字列sが遇文字列かどうかを返す
bool isEvenString(string s){
	string a = s.substr(0, s.length()/2);
	string b = s.substr(s.length()/2);
	if(a == b){
		return true;
	}
	else{
		return false;
	}
}
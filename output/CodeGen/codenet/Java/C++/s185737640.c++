#include <iostream>
#include <string>

using namespace std;

int main() {
	string S;
	cin >> S;
	if(S.length() % 2 == 1){
		S = S.substr(0, S.length() - 1);
	}
	else{
		S = S.substr(0, S.length() - 2);
	}
	for(; S.length() > 0; S = S.substr(0, S.length() - 2)){
		if(isEvenString(S)){
			break;
		}
	}
	cout << S.length();
	return 0;
}

//長さが偶数の文字列sが遇文字列かどうかを返す
static bool isEvenString(string s){
	string a = s.substr(0, s.length()/2);
	string b = s.substr(s.length()/2);
	if(a.compare(b) == 0){
		return true;
	}
	else{
		return false;
	}
}
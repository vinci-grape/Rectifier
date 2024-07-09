#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	long k;
	cin >> s >> k;
	stringBuffer sb;
	for(int i = 0; i<s.length(); i++){
		if((26-(s[i]-'a'))<=k && s[i]!='a'){
			k-=(26-(s[i]-'a'));
			sb.append('a');
		}else{
			sb.append(s[i]);
		}
	}
	if(k>0){
		sb[s.length()-1]=(char)('a'+(sb[s.length()-1]-'a'+k)%26);
	}
	cout << sb << endl;
	return 0;
}
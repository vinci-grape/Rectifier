#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	long long k;
	cin>>s>>k;
	for(int i=0;i<s.length();i++){
		if((26-(s[i]-'a'))<=k && s[i]!='a'){
			k-=26-(s[i]-'a');
			s[i]='a';
		}
	}
	if(k>0){
		s[s.length()-1]+=k%26;
	}
	cout<<s;
	return 0;
}
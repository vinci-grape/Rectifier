#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	long long k;
	cin>>s>>k;
	string ans="";
	for(int i=0;i<s.length();i++){
		if((26-(s[i]-'a'))<=k && s[i]!='a'){
			k-=26-(s[i]-'a');
			ans+='a';
		}else{
			ans+=s[i];
		}
	}
	if(k>0){
		char t=ans[s.length()-1];
		ans.erase(s.length()-1,1);
		ans+=((char)('a'+(t-'a'+k)%26));
	}
	cout<<ans<<endl;
	return 0;
}
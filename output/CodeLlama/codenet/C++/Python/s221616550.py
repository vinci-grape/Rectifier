#include <iostream>
using namespace std;

bool isPalindrome(string s){
  for(int i=0;i<s.length()/2;i++){
    if(s[i]==s[s.length()-1-i]) continue;
    else return false;
  }
  return true;
}

int main(){
  string s;
  cin >> s;
  if(isPalindrome(s)&&isPalindrome(s.substr(0,s.length()/2))){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
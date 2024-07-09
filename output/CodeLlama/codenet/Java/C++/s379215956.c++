#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  string s1 = s.substr(0,1);
  string s2 = s.substr(1,1);
  string s3 = s.substr(2,1);
  string s4 = s.substr(3,1);
  int a = 0;
  
  if(s1 == s2) a = 1;
  if(s2 == s3) a = 1;
  if(s3 == s4) a = 1;
  
  if (a==1) {
    cout << "Bad" << endl;
  } else {
    cout << "Good" << endl;
  }
  
  return 0;
}
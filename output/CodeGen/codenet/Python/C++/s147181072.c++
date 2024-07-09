#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cin >> str;
  string str2 = str;
  for (int i = 0; i < str.length(); i++) {
    str2[i] = tolower(str[i]);
  }
  cout << str2 << endl;
}
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  int abc[3];
  string str;
  stringstream ss;
  getline(cin, str);
  ss << str;
  ss >> abc[0] >> abc[1] >> abc[2];
  if (abc[0] < abc[1] && abc[1] < abc[2]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
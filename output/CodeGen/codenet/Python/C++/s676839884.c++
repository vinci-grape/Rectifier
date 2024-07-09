#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  string t;
  cin >> s >> t;
  if (t.substr(0, s.size()) == s) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
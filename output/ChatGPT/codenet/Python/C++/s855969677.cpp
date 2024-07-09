#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s == "RRR") {
    cout << 3 << endl;
  } else if (s == "SSS") {
    cout << 0 << endl;
  } else if (s == "RRS" || s == "SRR") {
    cout << 2 << endl;
  } else {
    cout << 1 << endl;
  }

  return 0;
}
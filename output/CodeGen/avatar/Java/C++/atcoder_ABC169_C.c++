#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
  long a;
  string b;
  char bChar[256];
  int length;
  string bStr;
  for (int i = 0; i < 256; i++) {
    bChar[i] = '.';
  }
  cin >> a >> b;
  length = b.length();
  for (int i = 0; i < length; i++) {
    if (b[i]!= '.') {
      bChar[i] = b[i];
    }
  }
  int bInt = atoi(bStr.c_str());
  long result = (a * bInt) / 100;
  cout << result << endl;
  return 0;
}
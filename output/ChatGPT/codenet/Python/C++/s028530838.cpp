#include <iostream>
#include <string>
using namespace std;

int main() {
  string x;
  cin >> x;

  if (islower(x[0])) {
    cout << "a" << endl;
  } else {
    cout << "A" << endl;
  }

  return 0;
}
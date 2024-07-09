#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  
  if (A < 10 && B < 10) {
    cout << A * B << endl;
  } else {
    cout << -1 << endl;
  }
  
  return 0;
}
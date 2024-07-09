#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int count;
  cin >> count;
  
  int total = 0;
  for (int ix = 1; ix <= count; ix++) {
    total += ix;
  }
  
  cout << total << endl;
  return 0;
}
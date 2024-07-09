#include <iostream>
using namespace std;

int main() {
  int i;
  for(i = 0; i < 5; i++){
      if(cin >> i && i == 0){
          cout << i+1 << endl;
          break;
      }
  }
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int c=0;
  int flg=0;
  while(n--) {
    int x, y;
    cin >> x >> y;
    if(x==y) {
      c++;
      if(c>=3) {
        flg=1;
      }
    }
    else {
      c=0;
    }
  }
  if(flg==0) {
    cout << "No" << endl;
  }
  else {
    cout << "Yes" << endl;
  }
  return 0;
}
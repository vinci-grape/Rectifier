#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
  string str;
  while(getline(cin, str)) {
    stringstream ss(str);
    int l[10];
    int d = 0;
    for (int i = 0; i < 10; i++) {
      ss >> l[i];
      d += l[i];
    }
    int v[2];
    ss >> v[0] >> v[1];
    double t = (double)d/(v[0] + v[1]);
    d = 0;
    for(int i = 0; i < 11; i++) {
      if(v[0]*t <= d) {
        cout << i << endl;
        break;
      }
      else {
        d += l[i];
      }
    }
  }
  return 0;
}
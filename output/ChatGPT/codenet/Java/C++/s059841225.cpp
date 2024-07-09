#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    stringstream ss(line);
    string token;
    vector<int> l(10);
    int d = 0;
    for (int i = 0; i < 10; i++) {
      getline(ss, token, ',');
      l[i] = stoi(token);
      d += l[i];
    }
    vector<int> v(2);
    getline(ss, token, ',');
    v[0] = stoi(token);
    getline(ss, token, ',');
    v[1] = stoi(token);
    double t = (double)d / (v[0] + v[1]);
    d = 0;
    for (int i = 0; i < 11; i++) {
      if (v[0] * t <= d) {
        cout << i << endl;
        break;
      } else {
        d += l[i];
      }
    }
  }
  return 0;
}
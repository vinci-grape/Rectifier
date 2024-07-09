#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Main{
public:
  static void main(string args[]){
    string str;
    cin >> str;
    vector<int> l;
    int d = 0;
    for(int i = 0; i < 10; i++){
      l.push_back(stoi(str.substr(i,1)));
      d += l[i];
    }
    int v[2] = {stoi(str.substr(10,1)),stoi(str.substr(11,1))};
    double t = (double)d/(v[0] + v[1]);
    d = 0;
    for(int i = 0; i < 11; i++){
      if(v[0]*t <= d)
        cout << i << endl;
      else
        d += l[i];
    }
  }
};
#include <iostream>
#include <vector>
using namespace std;

vector<int> revpos(vector<int> p, vector<int> q) {
  vector<int> vec = {0, 0};
  for (int i = 0; i < vec.size(); i++) {
    vec[i] = p[i] - q[i];
  }
  int tmp = 0;
  tmp = vec[0];
  vec[0] = vec[1];
  vec[1] = -tmp;
  vector<int> newpos = {0, 0};
  for (int i = 0; i < newpos.size(); i++) {
    newpos[i] = q[i] + vec[i];
  }
  return newpos;
}

int main() {
  vector<int> input = {0, 0, 0, 0};
  for (int i = 0; i < input.size(); i++) {
    cin >> input[i];
  }
  vector<vector<int>> position = {{0, 0}, {0, 0}, {0, 0}, {0, 0}};
  position[0][0] = input[0];
  position[0][1] = input[1];
  position[1][0] = input[2];
  position[1][1] = input[3];
  position[2] = revpos(position[0], position[1]);
  position[3] = revpos(position[1], position[2]);
  if (position[0] == revpos(position[2], position[3])) {
    cout << "OK" << endl;
  }
  vector<int> output = {0, 0, 0, 0};
  output[0] = position[2][0];
  output[1] = position[2][1];
  output[2] = position[3][0];
  output[3] = position[3][1];
  for (int i : output) {
    cout << i << endl;
  }
  return 0;
}
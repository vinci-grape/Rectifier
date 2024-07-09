#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, vector<pair<int, int>>> V;
  vector<int> color(n+1, -1);
  for (int i = 1; i <= n; ++i) {
    int u, v, w;
    cin >> u >> v >> w;
    if (V.find(u) == V.end()) {
      V[u] = vector<pair<int, int>>();
      V[u].push_back(make_pair(v, w));
    } else {
      V[u].push_back(make_pair(v, w));
    }
    if (V.find(v) == V.end()) {
      V[v] = vector<pair<int, int>>();
      V[v].push_back(make_pair(u, w));
    } else {
      V[v].push_back(make_pair(u, w));
    }
  }
  int i = 0;
  for (int j = 1; j <= n; ++j) {
    if (color[j] == -1) {
      i = j;
      color[i] = 0;
      break;
    }
  }
  while (i != 0) {
    bool flag = true;
    for (int j = 0; j < V[i].size(); ++j) {
      int v = V[i][j].first;
      int w = V[i][j].second;
      if (w % 2 == 0) {
        if (color[v] == -1) {
          color[v] = color[i];
        } else if (color[v] == color[i]) {
          continue;
        } else {
          flag = false;
          break;
        }
      } else {
        if (color[v] == -1) {
          color[v] = 0;
          if (color[i] == 0) {
            color[v] = 1;
          }
        } else if (color[v] == color[i]) {
          flag = false;
          break;
        } else {
          continue;
        }
      }
    }
    if (flag == false) {
      cout << "No" << endl;
      break;
    }
    i = 0;
    for (int j = 1; j <= n; ++j) {
      if (color[j] == -1) {
        i = j;
        color[i] = 0;
        break;
      }
    }
  }
  for (int j = 1; j <= n; ++j) {
    cout << color[j] << endl;
  }
  return 0;
}
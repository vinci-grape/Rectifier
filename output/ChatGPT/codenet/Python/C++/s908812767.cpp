#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, vector<pair<int, int>>> V;
map<int, int> color;

bool dfs(int i) {
  for (auto p : V[i]) {
    int v = p.first;
    int w = p.second;
    if (w % 2 == 0) {
      if (color[v] == -1) {
        color[v] = color[i];
      } else if (color[v] == color[i]) {
        continue;
      } else if (color[v] != color[i]) {
        return false;
      }
    } else {
      if (color[v] == -1) {
        color[v] = color[i] == 0 ? 1 : 0;
      } else if (color[v] == color[i]) {
        return false;
      } else if (color[v] != color[i]) {
        continue;
      }
    }
    if (!dfs(v)) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i < n; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    V[u].push_back(make_pair(v, w));
    V[v].push_back(make_pair(u, w));
  }
  for (int i = 1; i <= n; i++) {
    color[i] = -1;
  }
  while (true) {
    int i = 0;
    for (int j = 1; j <= n; j++) {
      if (color[j] == -1) {
        i = j;
        color[i] = 0;
        break;
      }
    }
    if (i == 0) {
      for (int j = 1; j <= n; j++) {
        cout << color[j] << endl;
      }
      break;
    } else {
      if (!dfs(i)) {
        cout << "No" << endl;
        break;
      }
    }
  }
  return 0;
}
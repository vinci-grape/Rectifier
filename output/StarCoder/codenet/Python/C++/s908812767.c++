#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> V(n+1);
  vector<int> color(n+1, -1);
  for (int i = 1; i < n; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    V[u].push_back({v, w});
    V[v].push_back({u, w});
  }
  for (int i = 1; i < n; i++) {
    if (color[i] == -1) {
      color[i] = 0;
      break;
    }
  }
  if (color[n] == -1) {
    color[n] = 1;
  }
  while (true) {
    int i = 0;
    for (int j = 1; j < n; j++) {
      if (color[j] == -1) {
        i = j;
        color[i] = 0;
        break;
      }
    }
    if (i == 0) {
      for (int j = 1; j < n; j++) {
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
}

# DFS

#include <bits/stdc++.h>
using namespace std;

int dfs(int i) {
  for (auto vw : V[i]) {
    int v = vw[0], w = vw[1];
    if ((w % 2) == 0) {
      if (color[v] == -1) {
        color[v] = color[i];
      } else if (color[v] == color[i]) {
        continue;
      } else {
        return false;
      }
    } else {
      if (color[v] == -1) {
        color[v] = 0 if color[i] else 1;
      } else if (color[v] == color[i]) {
        return false;
      } else {
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
  vector<vector<int>> V(n+1);
  vector<int> color(n+1, -1);
  for (int i = 1; i < n; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    V[u].push_back({v, w});
    V[v].push_back({u, w});
  }
  for (int i = 1; i < n; i++) {
    if (color[i] == -1) {
      color[i] = 0;
      break;
    }
  }
  if (color[n] == -1) {
    color[n] = 1;
  }
  while (true) {
    int i = 0;
    for (int j = 1; j < n; j++) {
      if (color[j] == -1) {
        i = j;
        color[i] = 0;
        break;
      }
    }
    if (i == 0) {
      for (int j = 1; j < n; j++) {
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
}
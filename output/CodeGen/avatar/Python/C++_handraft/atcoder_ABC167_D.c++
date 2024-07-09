#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

const int maxn = 1005;
const int maxk = 1005;

int N, K;
int L[maxn];
int Hash[maxn];
int path[maxk];
int ind = 0;
int x = 1;
int t = -1;
bool flag = false;

void dfs(int cur, int pre, int len) {
    if (len == K) {
        if (flag) {
            cout << path[t];
        } else {
            cout << path[cur];
        }
        return;
    }
    if (len > K) {
        return;
    }
    if (Hash[cur]!= 0) {
        t = Hash[cur];
        flag = true;
        return;
    }
    path[len] = cur;
    Hash[cur] = len;
    dfs(cur, cur, len + 1);
    Hash[cur] = 0;
    path[len] = -1;
    dfs(cur, pre, len + 1);
}

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> L[i];
    }
    L[0] = -1;
    for (int i = 1; i <= N; i++) {
        if (Hash[i] == 0) {
            x = i;
            break;
        }
    }
    dfs(x, x, 1);
    return 0;
}
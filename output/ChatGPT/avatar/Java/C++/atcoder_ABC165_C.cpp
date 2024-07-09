#include <iostream>
#include <vector>
using namespace std;

int *a = nullptr;
int *b = nullptr;
int *c = nullptr;
int *d = nullptr;
int n = 0;
int m = 0;
int q = 0;
long long ans = -100LL;

void dfs(vector<int> &list) {
    if (list.size() == n) {
        long long score = 0LL;
        for (int i = 0; i < q; ++i) {
            score += (list[b[i]] - list[a[i]] == c[i]) ? d[i] : 0LL;
        }
        ans = max(ans, score);
        return;
    }
    if (!list.empty()) {
        for (int num = list[list.size() - 1]; num <= m; ++num) {
            list.push_back(num);
            dfs(list);
            list.pop_back();
        }
    } else {
        for (int num = 1; num <= m; ++num) {
            list.push_back(num);
            dfs(list);
            list.pop_back();
        }
    }
}

int main() {
    cin >> n >> m >> q;
    a = new int[q];
    b = new int[q];
    c = new int[q];
    d = new int[q];
    for (int i = 0; i < q; ++i) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        --a[i];
        --b[i];
    }
    vector<int> list;
    dfs(list);
    cout << ans << endl;
    delete[] a;
    delete[] b;
    delete[] c;
    delete[] d;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string sa;
    cin >> sa;
    int sa_count = count(sa.begin(), sa.end(), '-');
    sa_count = min(n - sa_count, sa_count);

    vector<string> ss;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        b -= a;
        if (b % 2 && b <= sa_count << 1) {
            ss.push_back("1\n");
        } else {
            ss.push_back("0\n");
        }
    }

    for (int i = 0; i < ss.size(); i++) {
        cout << ss[i];
    }

    return 0;
}
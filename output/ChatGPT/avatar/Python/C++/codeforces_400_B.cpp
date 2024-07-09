#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    set<int> c;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int indexS = s.find("S");
        int indexG = s.find("G");
        c.insert(indexS - indexG);
    }
    if (any_of(c.begin(), c.end(), [](int a) { return a < 0; })) {
        cout << -1 << endl;
    } else {
        cout << c.size() << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> res;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        res.insert(a);
    }
    cout << res.size() << endl;
    return 0;
}
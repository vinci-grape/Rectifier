#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<string> S;
    for (int a = 0; a < n; a++) {
        string s;
        cin >> s;
        S.push_back(s);
    }
    sort(S.begin(), S.end());
    for (string s : S) {
        cout << s;
    }
    cout << endl;
}
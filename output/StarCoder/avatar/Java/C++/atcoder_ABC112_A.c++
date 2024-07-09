#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    if (n == 1) {
        cout << "Hello World" << endl;
    } else {
        string strs[2];
        cin >> strs[0] >> strs[1];
        cout << stoi(strs[0]) + stoi(strs[1]) << endl;
    }
    return 0;
}
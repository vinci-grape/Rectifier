#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> L;
    int r = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        L.insert(L.end(), r, s[i] - '0');
        r++;
    }
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        cout << L[s[i] - '0' - 1] << endl;
    }
    return 0;
}
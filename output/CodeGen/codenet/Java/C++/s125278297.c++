#include <iostream>
#include <string>
using namespace std;

int main() {
    int h = 0, w = 0;
    cin >> h >> w;
    string ans[h];
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        ans[i] = s;
    }
    cout << string(w + 2, '#') << endl;
    for (string s : ans) {
        cout << s << endl;
    }
    cout << string(w + 2, '#') << endl;
    return 0;
}
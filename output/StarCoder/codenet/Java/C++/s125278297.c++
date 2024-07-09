#include <iostream>
#include <string>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    string ans[h];
    for (int i = 0; i < h; i++) {
        cin >> ans[i];
    }
    cout << string(w + 2, '#') << endl;
    for (int i = 0; i < h; i++) {
        cout << "#" + ans[i] + "#" << endl;
    }
    cout << string(w + 2, '#') << endl;
    return 0;
}
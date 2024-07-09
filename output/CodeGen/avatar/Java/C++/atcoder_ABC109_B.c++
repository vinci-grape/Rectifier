#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, string> map;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        map[i] = s;
    }
    bool ans = true;
    map<int, string> past;
    string next;
    for (int i = 0; i < N; i++) {
        if (past.count(i) > 0) {
            ans = false;
            break;
        }
        past[i] = map[i];
        if (i!= 0) {
            if (next!= map[i].substr(0, 1)) {
                ans = false;
                break;
            }
        }
        next = map[i].substr(map[i].length() - 1, map[i].length());
    }
    if (ans) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
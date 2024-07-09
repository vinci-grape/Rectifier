#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;
    unordered_map<int, string> map;
    for (int i = 0; i < N; i++) {
        cin >> map[i];
    }
    bool ans = true;
    unordered_map<int, string> past;
    string next = "";
    for (int i = 0; i < N; i++) {
        if (past.count(map[i])) {
            ans = false;
            break;
        }
        past[i] = map[i];
        if (i != 0) {
            if (next != map[i].substr(0, 1)) {
                ans = false;
                break;
            }
        }
        next = map[i].substr(map[i].length() - 1, map[i].length());
    }
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
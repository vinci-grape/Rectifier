#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    unordered_map<char, int> dt;
    for (char i : s) {
        if (dt.count(i)) {
            dt[i]++;
        } else {
            dt[i] = 1;
        }
    }
    
    int cnt = 0;
    bool x = true;
    for (auto& kv : dt) {
        if (kv.second % 2 != 0 && cnt < 1) {
            cnt++;
        } else if (kv.second % 2 != 0 && cnt >= 1) {
            x = false;
            break;
        }
    }
    
    if (x) {
        cout << "First" << endl;
    } else if (!x && s.size() % 2 == 0) {
        cout << "Second" << endl;
    } else if (!x && s.size() % 2 != 0) {
        cout << "First" << endl;
    }
    
    return 0;
}
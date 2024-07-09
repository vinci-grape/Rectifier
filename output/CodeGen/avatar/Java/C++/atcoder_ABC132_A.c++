#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cassert>
using namespace std;

class atcoder_ABC132_A {
public:
    atcoder_ABC132_A() {
    }

    void run() {
        string s;
        cin >> s;
        char targ[s.size()];
        for (int i = 0; i < s.size(); ++i) {
            targ[i] = s[i];
        }
        map<char, int> map;
        for (int i = 0; i < s.size(); ++i) {
            if (!map.count(targ[i])) {
                map[targ[i]] = 1;
            } else {
                map[targ[i]]++;
            }
        }
        bool ok = true;
        for (auto c : map) {
            if (c.second!= 2) {
                ok = false;
                break;
            }
        }
        if (ok && map.size() == 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
};

int main() {
    atcoder_ABC132_A a;
    a.run();
    return 0;
}
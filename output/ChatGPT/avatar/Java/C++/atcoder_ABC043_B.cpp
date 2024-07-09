#include <iostream>
#include <string>

using namespace std;

class BUnhappyHackingABCEdit {
public:
    void solve() {
        string s;
        cin >> s;
        string d;
        for (char c : s) {
            switch (c) {
                case '0':
                    d += "0";
                    break;
                case '1':
                    d += "1";
                    break;
                case 'B':
                    if (!d.empty()) {
                        d.pop_back();
                    }
                    break;
            }
        }
        cout << d << endl;
    }
};

int main() {
    BUnhappyHackingABCEdit solver;
    solver.solve();
    
    return 0;
}
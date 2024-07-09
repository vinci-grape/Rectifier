#include <iostream>
using namespace std;

class Main {
    int high;
    int low;
    int sa;

public:
    void solve() {
        for (int i = 0; i < 7; i++) {
            cin >> high;
            cin >> low;
            sa = high - low;
            cout << sa << endl;
        }
    }
};

int main() {
    Main obj;
    obj.solve();

    return 0;
}
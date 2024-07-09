#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class AStationAndBus {
public:
    void solve(int testNumber, string s, ostream &out) {
        if (s.find("A")!= string::npos && s.find("B")!= string::npos) {
            out << "Yes" << endl;
        } else {
            out << "No" << endl;
        }
    }
};

int main() {
    int nTests;
    cin >> nTests;
    while (nTests--) {
        string s;
        cin >> s;
        AStationAndBus solver;
        solver.solve(nTests, s, cout);
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class AStationAndBus {
public:
    void solve(istream& in, ostream& out) {
        string s;
        in >> s;
        
        if (s.find('A') != string::npos && s.find('B') != string::npos) {
            out << "Yes" << endl;
        } else {
            out << "No" << endl;
        }
    }
};

int main() {
    AStationAndBus solver;
    solver.solve(cin, cout);

    return 0;
}
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    int x, a, y;
    ss >> x >> a >> y;
    string h = "NO";
    if (x == 5 || x == 7 || a == 5 || a == 7 || y == 5 || y == 7) {
        if (x + y + a == 17) {
            h = "YES";
        }
    }
    cout << h << endl;
}
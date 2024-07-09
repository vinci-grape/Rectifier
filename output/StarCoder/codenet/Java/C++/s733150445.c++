#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    stringstream ss;
    ss << fixed << setprecision(10) << stod(a) * stod(b);
    string res;
    getline(ss, res, '.');
    cout << res << endl;
    return 0;
}
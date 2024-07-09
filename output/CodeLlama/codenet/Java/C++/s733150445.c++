#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    stringstream ss;
    ss << a << "." << b;
    double mul = stod(ss.str());
    stringstream ss2;
    ss2 << mul;
    string res = ss2.str();
    int pos = res.find(".");
    cout << res.substr(0, pos) << endl;
    return 0;
}
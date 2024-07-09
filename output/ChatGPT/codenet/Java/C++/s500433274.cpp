#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    string a, b, c;
    while (cin >> a >> b) {
        c = max(a, b);
        if (a == c && b != c)
            cout << "GREATER" << endl;
        else if (b == c && a != c)
            cout << "LESS" << endl;
        else
            cout << "EQUAL" << endl;
    }
    return 0;
}
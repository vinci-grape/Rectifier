#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int denominator = x2 - x1;
    int numerator = y2 - y1;
    double quotient;

    if (denominator != 0) {
        quotient = static_cast<double>(numerator) / denominator;
    }

    if (numerator == 0) {
        int d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        int x4 = x1;
        int x3 = x2;
        int y3 = y2 + d;
        int y4 = y1 + d;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else if (denominator == 0) {
        int y4 = y2;
        int y3 = y1;
        int d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        int x4 = x1 + d;
        int x3 = x2 + d;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else if (quotient == 1) {
        int x4 = x2;
        int x3 = x1;
        int y4 = y1;
        int y3 = y2;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else if (quotient == -1) {
        int x4 = x1;
        int x3 = x2;
        int y4 = y2;
        int y3 = y1;
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else {
        cout << "-1" << endl;
    }

    return 0;
}
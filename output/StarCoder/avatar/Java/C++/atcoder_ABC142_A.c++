#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double input;
    cin >> input;
    double countOdd = round(input / 2);
    cout << fixed << setprecision(10) << countOdd / input << endl;
    return 0;
}
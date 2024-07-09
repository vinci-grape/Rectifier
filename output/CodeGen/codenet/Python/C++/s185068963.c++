#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Yes" << (a + b >= c? " " : "") << "No";
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int h = X / 500;
    int a = (X % 500) / 5;
    int y = h * 1000 + a * 5;

    cout << y << endl;

    return 0;
}
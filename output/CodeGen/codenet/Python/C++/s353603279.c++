#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int X;
    cout << "Enter an integer: ";
    cin >> X;
    int h = X / 500;
    int a = (X % 500) / 5;
    int y = h * 1000 + a * 5;
    cout << "The integer " << X << " is " << y << " in base 10." << endl;
    return 0;
}
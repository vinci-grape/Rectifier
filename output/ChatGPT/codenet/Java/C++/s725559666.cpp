#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b && b < c && a < c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
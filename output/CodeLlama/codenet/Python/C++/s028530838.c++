#include <iostream>
using namespace std;

int main() {
    string x;
    cin >> x;
    if (x[0] >= 'a' && x[0] <= 'z') {
        cout << "a" << endl;
    } else {
        cout << "A" << endl;
    }
    return 0;
}
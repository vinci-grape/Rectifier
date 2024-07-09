#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    if (a[0] == a[1] || a[1] == a[2] || a[2] == a[0]) {
        cout << "No";
    } else {
        cout << "Yes";
    }
    return 0;
}
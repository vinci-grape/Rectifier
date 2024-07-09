#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    if (a.find('9') != string::npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
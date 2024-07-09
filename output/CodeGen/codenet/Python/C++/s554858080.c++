#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    cin >> num;
    if (num.length() % 4 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
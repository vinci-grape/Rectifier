#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    string T = S.substr(1, 2);
    int date = stoi(T);
    if (date <= 430) {
        cout << "Heisei" << endl;
    } else {
        cout << "TBD" << endl;
    }
    return 0;
}
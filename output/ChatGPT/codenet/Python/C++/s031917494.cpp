#include <iostream>
#include <string>
using namespace std;

int main() {
    int day;
    cin >> day;
    cout << "Christmas" << " Eve";
    for (int i = 0; i < abs(day - 25); i++) {
        cout << " Eve";
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int E;
    int Y;
    
    cin >> E;
    cin >> Y;
    
    if (E == 0) {
        if (Y <= 1911) {
            cout << "M";
            cout << Y - 1867;
        } else if (Y <= 1925) {
            cout << "T";
            cout << Y - 1911;
        } else if (Y <= 1988) {
            cout << "S";
            cout << Y - 1925;
        } else {
            cout << "H";
            cout << Y - 1988;
        }
    } else if (E == 1) {
        cout << 1867 + Y;
    } else if (E == 2) {
        cout << 1911 + Y;
    } else if (E == 3) {
        cout << 1925 + Y;
    } else {
        cout << 1988 + Y;
    }
    
    return 0;
}
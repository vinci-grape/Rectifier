#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int min = INT_MAX;
    for (int i = 0; i <= S.length() - T.length(); i++) {
        int calc = 0;
        for (int x = 0; x < T.length(); x++) {
            if (S[i + x]!= T[x]) {
                calc++;
            }
        }
        min = min < calc? min : calc;
    }
    if (min!= INT_MAX) {
        cout << min << endl;
    } else {
        cout << T.length() << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int N;
    cin >> N;
    string u;
    double x;
    for (int i = 0; i < N; ++i) {
        cin >> x >> u;
        if (u == "JPY") {
            x *= 1.0 / 100;
        } else {
            x *= 1.0 / 380000;
        }
        cout << x << endl;
    }
    return 0;
}
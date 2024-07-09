#include <iostream>
#include <cstdlib>
using namespace std;

int A, B;
int amari, result;

int main() {
    cin >> A >> B;
    amari = B - 1;
    result = (B - 1) / (A - 1);
    if (amari!= 0) {
        result += 1;
    }
    cout << result << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    int K;
    string S;
    cin >> K >> S;

    if (S.length() <= K) {
        cout << S << endl;
    } else {
        cout << S.substr(0, K) << "..." << endl;
    }

    return 0;
}
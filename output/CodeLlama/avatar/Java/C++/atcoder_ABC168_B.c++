#include <iostream>
using namespace std;
int main() {
    int K;
    string S;
    cin >> K;
    cin >> S;
    if (S.length() <= K) {
        cout << S << endl;
    } else {
        cout << S.substr(0, K) << "..." << endl;
    }
}
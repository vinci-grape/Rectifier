#include <iostream>
using namespace std;

string main() {
    int K;
    cin >> K;
    string S;
    cin >> S;
    if (S.length() <= K) {
        return S;
    }
    return S.substr(0, K) + "...";
}

int main() {
    cout << main() << endl;
}
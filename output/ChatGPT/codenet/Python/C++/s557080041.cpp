#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N == 0) {
        cout << "Yes" << endl;
    } else {
        string N_str = to_string(N);
        vector<int> L;
        for (char c : N_str) {
            L.push_back(c - '0');
        }
        int X = 0;
        for (int i : L) {
            X += i;
        }
        if (X % 9 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
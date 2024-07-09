#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int x = 1;
    for (int i = 0; i < N - 1; i++) {
        if (S[i]!= S[i + 1]) {
            x++;
        }
    }
    cout << x << endl;
    return 0;
}
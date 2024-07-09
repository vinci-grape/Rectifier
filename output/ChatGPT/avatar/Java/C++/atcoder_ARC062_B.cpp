#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int score = 0;
    for (int i = 0; i < S.length(); i++) {
        char my = i % 2 == 0 ? 'g' : 'p';
        char his = S[i];
        if (my != his) {
            score += my == 'p' ? 1 : -1;
        }
    }
    cout << score << endl;
}
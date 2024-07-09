#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 0;
    int record = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
            count++;
        } else {
            if (count > record) {
                record = count;
            }
            count = 0;
        }
    }
    if (count > record) {
        record = count;
    }
    cout << record << endl;
    return 0;
}
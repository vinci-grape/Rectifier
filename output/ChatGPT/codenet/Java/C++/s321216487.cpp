#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    string begin;
    string end;
    string answer;

    for (int i = 0; i < S.length(); i++) {
        for (int j = 0; j < S.length(); j++) {
            begin = S.substr(0, i);
            end = S.substr(j, S.length());
            answer = begin + end;

            if (answer == "keyence") {
                cout << "YES" << endl;
                return 0;
            } else if (begin == "keyence") {
                cout << "YES" << endl;
                return 0;
            } else if (end == "keyence") {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

}
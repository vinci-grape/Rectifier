#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string Sd, T;
    cin >> Sd >> T;
    int count = 0;
    char c;
    bool ok = false;
    int first = -1;
    int end = -1;
    for(int j = 0; j < Sd.length(); j++) {
        count = 0;
        for(int i = 0; i+j < Sd.length(); i++) {
            c = Sd[i+j];
            if(c == '?' || c == T[count]) {
                count++;
                if(count == T.length()) {
                    first = i+j - T.length() + 1;
                    end = i+j;
                    ok = true;
                    break;
                }
            } else {
                count = 0;
            }
        }
    }
    if(ok) {
        for(int i = 0; i < Sd.length(); i++) {
            if(first <= i && i <= end) {
                cout << T[i - first];
            } else {
                if(Sd[i] == '?') cout << "a";
                else cout << Sd[i];
            }
        }
        cout << endl;
    } else {
        cout << "UNRESTORABLE" << endl;
    }
}
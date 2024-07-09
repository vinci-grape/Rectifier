#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < sizeof(alphabets) / sizeof(alphabets[0]); i++) {
        if (alphabets[i] == s[0]) {
            cout << alphabets[i + 1] << endl;
            break;
        }
    }
    return 0;
}
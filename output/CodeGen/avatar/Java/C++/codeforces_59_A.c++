#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;
    int uppercase = 0;
    int lowercase = 0;
    for (int i = 0; i < word.length(); i++) {
        if (isupper(word[i])) {
            uppercase++;
        } else {
            lowercase++;
        }
    }
    if (uppercase > lowercase) {
        cout << word.toupper();
    } else if (lowercase > uppercase) {
        cout << word.tolower();
    } else {
        cout << word.tolower();
    }
    return 0;
}
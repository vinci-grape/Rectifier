#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    for (int i = 0; i < input.length(); i++) {
        if (isupper(input[i])) {
            input[i] = tolower(input[i]);
        } else if (islower(input[i])) {
            input[i] = toupper(input[i]);
        }
    }
    cout << input << endl;
    return 0;
}
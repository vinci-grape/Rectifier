#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int pya;
    cin >> pya;
    vector<string> arre;
    while (pya) {
        pya--;
        string word;
        cin >> word;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        arre.push_back(word);
    }
    string oString;
    cin >> oString;
    transform(oString.begin(), oString.end(), oString.begin(), ::tolower);
    char letter1;
    cin >> letter1;
    letter1 = tolower(letter1);
    char letter2 = (letter1 != 'a') ? 'a' : 'b';
    vector<int> valid(oString.length(), 0);
    set<int> setcito;
    for (string x : arre) {
        size_t index = oString.find(x);
        while (index != string::npos) {
            for (size_t i = index; i < index + x.length(); i++) {
                setcito.insert(i);
            }
            index = oString.find(x, index + 1);
        }
    }
    for (int i : setcito) {
        char letter = (oString[i] != letter1) ? letter1 : letter2;
        oString[i] = islower(oString[i]) ? letter : toupper(letter);
    }
    for (char x : oString) {
        cout << x;
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <unordered_map>
using namespace std;

char reverse(char ch) {
    if (islower(ch)) {
        return toupper(ch);
    } else {
        return tolower(ch);
    }
}

int main() {
    string s, t;
    cin >> s >> t;
    
    int ura = 0;
    int opa = 0;
    
    unordered_map<char, int> tmap;
    for (int i = 0; i < t.length(); i++) {
        char ch = t[i];
        if (tmap.find(ch) == tmap.end()) {
            tmap[ch] = 1;
        } else {
            tmap[ch]++;
        }
    }
    
    int length = s.length();
    for (int i = 0; i < length; i++) {
        char ch = s[i];
        int num = tmap[ch];
        if (num == 0) {
            continue;
        }
        if (num == 1) {
            tmap.erase(ch);
        } else {
            tmap[ch]--;
        }
        s[i] = 'Я';
        ura++;
    }
    
    for (int i = 0; i < length; i++) {
        char ch = s[i];
        char rch = reverse(ch);
        int num = tmap[rch];
        if (num == 0) {
            continue;
        }
        if (num == 1) {
            tmap.erase(rch);
        } else {
            tmap[rch]--;
        }
        opa++;
    }
    
    cout << ura << " " << opa << endl;
    return 0;
}
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    unordered_map<char, int> freqs;
    unordered_map<char, int> freqt;
    int yay = 0, whoops = 0;
    
    for (char letra : s) {
        freqs[letra]++;
    }
    
    for (char letra : t) {
        freqt[letra]++;
    }
    
    for (char letra : s) {
        if (freqs[letra] > 0 && freqt[letra] > 0) {
            yay++;
            freqs[letra]--;
            freqt[letra]--;
        }
    }
    
    for (char letra : s) {
        if (freqs[letra] > 0) {
            if (islower(letra) && freqt[toupper(letra)] > 0) {
                whoops++;
                freqs[letra]--;
                freqt[toupper(letra)]--;
            }
            else if (isupper(letra) && freqt[tolower(letra)] > 0) {
                whoops++;
                freqs[letra]--;
                freqt[tolower(letra)]--;
            }
        }
    }
    
    cout << yay << " " << whoops << endl;
    
    return 0;
}
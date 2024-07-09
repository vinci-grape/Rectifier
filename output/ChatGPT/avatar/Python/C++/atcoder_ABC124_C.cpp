#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    unordered_map<char, int> even;
    unordered_map<char, int> odd;
    
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            even[s[i]]++;
        } else {
            odd[s[i]]++;
        }
    }
    
    int minDeletions = min(s.length() - (even['0'] + odd['1']), s.length() - (even['1'] + odd['0']));
    cout << minDeletions << endl;

    return 0;
}
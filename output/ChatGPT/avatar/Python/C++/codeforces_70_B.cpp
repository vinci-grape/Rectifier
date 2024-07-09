#include <iostream>
#include <regex>
using namespace std;

int main() {
    int n;
    cin >> n;
    string input;
    getline(cin.ignore(), input);
    
    int ans = 1, sumL = 0;
    regex delimiter("[.?!]");
    sregex_token_iterator it(input.begin(), input.end(), delimiter, -1), end;
    
    for (; it != end; ++it) {
        string s = it->str();
        s = regex_replace(s, regex("^\\s+"), "") + ".";
        int L = s.length();
        
        if (L > 1) {
            if (L > n) {
                cout << "Impossible" << endl;
                return 0;
            }
            if (sumL + L + (sumL > 0) > n) {
                ans += 1;
                sumL = L;
            } else {
                sumL = sumL + L + (sumL > 0);
            }
        }
    }
    cout << ans << endl;

    return 0;
}
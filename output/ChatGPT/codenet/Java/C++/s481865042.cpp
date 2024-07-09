#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    long long k;
    cin >> s >> k;
    
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if ((26 - (s[i] - 'a')) <= k && s[i] != 'a') {
            k -= 26 - (s[i] - 'a');
            result += 'a';
        } else {
            result += s[i];
        }
    }
    
    if (k > 0) {
        char t = result[result.length() - 1];
        result = result.substr(0, result.length() - 1);
        result += (char)('a' + (t - 'a' + k) % 26);
    }
    
    cout << result << endl;
    
    return 0;
}
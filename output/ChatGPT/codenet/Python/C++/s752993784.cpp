#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<int> mods(s.length(), 0);
    vector<int> countRemainder(2019, 0);
    int cnt = 0;
    
    int m = 1;
    int mod = 0;
    for (int i = 0; i < s.length(); i++) {
        mod += (s[s.length() - i - 1] - '0') * m;
        mod %= 2019;
        m *= 10;
        m %= 2019;
        
        countRemainder[mod]++;
    }
    
    countRemainder[0]++;
    
    for (int i = 0; i < 2019; i++) {
        cnt += countRemainder[i] * (countRemainder[i] - 1) / 2;
    }
    
    cout << cnt << endl;
    
    return 0;
}
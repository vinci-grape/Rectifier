#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    long long ans = 0;
    
    for(int mask = 0; mask < (1 << (n - 1)); mask++) {
        long long sum = 0;
        string x = "" + s.at(0);
        
        for(int i = 0; i < n - 1; i++) {
            if((mask & (1 << i)) >= 1) {
                x += "+" + s.at(i + 1);
            }
            else {
                x += s.at(i + 1);
            }
        }
        
        vector<string> split;
        size_t pos = 0;
        string delimiter = "+";
        
        while((pos = x.find(delimiter)) != string::npos) {
            string token = x.substr(0, pos);
            split.push_back(token);
            x.erase(0, pos + delimiter.length());
        }
        
        split.push_back(x);
        
        for(int i = 0; i < split.size(); i++) {
            sum += stoll(split[i]);
        }
        
        ans += sum;
    }
    
    cout << ans << endl;
    
    return 0;
}
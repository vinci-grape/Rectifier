#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string my_str = "";
    
    for (char c : s) {
        if (c == '0' || c == '1') {
            my_str += c;
        } else if (c == 'B' && my_str.length() != 0) {
            my_str = my_str.substr(0, my_str.length() - 1);
        }
    }
    
    cout << my_str;
    
    return 0;
}
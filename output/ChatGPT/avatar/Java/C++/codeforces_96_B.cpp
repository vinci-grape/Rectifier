#include <iostream>
#include <string>
using namespace std;

int main() {
    long long number;
    cin >> number;
    long long ans = -1, value = 0;
    int mask = 2;
    while (value < number) {
        string s = bitset<32>(mask++).to_string().substr(1);
        int zeros = 0;
        for (char c : s) {
            if (c == '0') zeros++;
        }
        if (zeros != s.length() - zeros) continue;
        s = s.replace(s.find('0'), 1, "4");
        s = s.replace(s.find('1'), 1, "7");
        value = stoll(s);
    }
    cout << value << endl;
}
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    long number;
    cin >> number;
    long ans = -1, value = 0;
    int mask = 2;
    while (value < number) {
        string s = to_string(mask++);
        int zeros = 0;
        for (char c : s.c_str()) if (c == '0') zeros++;
        if (zeros!= s.length() - zeros) continue;
        s = s.replace('0', '4');
        s = s.replace('1', '7');
        value = stol(s);
    }
    cout << value << endl;
    return 0;
}
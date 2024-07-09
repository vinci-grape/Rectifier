#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int calculate(int n, string s) {
    int rNum = 0;
    int gNum = 0;
    int bNum = 0;
    for (char c : s) {
        if (c == 'R') {
            rNum++;
        } else if (c == 'G') {
            gNum++;
        } else if (c == 'B') {
            bNum++;
        }
    }
    int sum = 0;
    for (int step = 1; step <= ceil(n / 2); step++) {
        for (int i = 0; i < n - 2 * step; i++) {
            string subString = s.substr(i, 3);
            if (subString == "RGB" || subString == "RBG" || subString == "BGR" || subString == "BRG" || subString == "GBR" || subString == "GRB") {
                sum++;
            }
        }
    }
    return rNum * gNum * bNum - sum;
}

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    cout << calculate(N, S) << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    int K;
    cin >> K;
    if (K % 2 == 0 || K % 5 == 0) return -1;
    if (K % 7 == 0) K /= 7;
    K *= 9;
    int ans = 1;
    int remainder = 10 % K;
    while (remainder!= 1) {
        ans++;
        remainder = remainder * 10 % K;
    }
    cout << ans << endl;
    return 0;
}
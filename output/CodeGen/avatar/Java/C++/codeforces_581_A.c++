#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (true) {
        if (a > 0 && b > 0) {
            count++;
            a--;
            b--;
        } else {
            break;
        }
    }
    int ans = a / 2 + b / 2;
    cout << count << " " << ans << endl;
    return 0;
}
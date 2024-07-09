#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = n / (a + b) * a;
    int r = min(n % (a + b), a);
    ans += r;
    cout << ans << endl;
    return 0;
}
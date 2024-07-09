#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    cout << "Yes" << endl;
    for (int i = 0; i < n; ++i) {
        int max = n * 2 - 1;
        if (x == 1 || x == max) {
            cout << "No" << endl;
            return 0;
        }
        cout << "Yes" << endl;
        string sep = "\n";
        string ans = IntStream.range(x + n - 1, x + n + max - 1).mapToObj((e) -> (e % max + 1) + sep).collect(
                StringBuilder::new,
                StringBuilder::append,
                StringBuilder::append).toString();
        cout << ans << endl;
    }
    return 0;
}
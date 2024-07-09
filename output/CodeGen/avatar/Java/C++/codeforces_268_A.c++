#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    int h[n], g[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        cin >> g[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (h[i] == g[j]) {
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}
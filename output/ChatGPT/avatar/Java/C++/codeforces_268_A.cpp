#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    vector<int> h(n);
    vector<int> g(n);

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

}
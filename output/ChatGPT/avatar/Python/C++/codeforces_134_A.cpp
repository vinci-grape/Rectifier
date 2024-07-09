#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    int x = 0;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
        x += w[i];
    }
    vector<int> d;
    for (int i = 0; i < n; i++) {
        if ((x - w[i]) / (n - 1) == w[i]) {
            d.push_back(i + 1);
        }
    }
    cout << d.size() << endl;
    for (int i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }
    cout << endl;

    return 0;
}
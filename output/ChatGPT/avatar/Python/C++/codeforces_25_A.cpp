#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> list(n);
    for (int i = 0; i < n; i++) {
        cin >> list[i];
        list[i] %= 2;
    }
    if (sum(list) == 1) {
        cout << list.index(1) + 1 << endl;
    } else {
        cout << list.index(0) + 1 << endl;
    }
}
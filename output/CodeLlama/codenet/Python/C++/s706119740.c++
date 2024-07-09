#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int candy[n];
    for (int i = 0; i < n; i++) {
        cin >> candy[i];
    }
    sort(candy, candy + n);
    if (candy[0] + candy[1] == candy[2]) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
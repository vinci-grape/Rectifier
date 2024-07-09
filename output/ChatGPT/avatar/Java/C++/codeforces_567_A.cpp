#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    int ar[a];
    int max = 0, min = 0;
    for (int i = 0; i < a; i++) {
        cin >> ar[i];
    }
    for (int i = 0; i < a; i++) {
        max = max(ar[i] - ar[0], ar[a - 1] - ar[i]);
        if (i == 0) {
            min = ar[i + 1] - ar[i];
        } else if (i == a - 1) {
            min = ar[i] - ar[i - 1];
        } else {
            min = min(ar[i] - ar[i - 1], ar[i + 1] - ar[i]);
        }
        cout << min << " " << max << endl;
    }
}
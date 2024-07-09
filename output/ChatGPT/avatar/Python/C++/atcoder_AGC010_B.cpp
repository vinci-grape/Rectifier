#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (accumulate(a.begin(), a.end(), 0) % (n * (n + 1) / 2)) {
        cout << "NO" << endl;
    } else {
        double k = accumulate(a.begin(), a.end(), 0) / (n * (n + 1) / 2);
        a.push_back(a[0]);
        bool isValid = true;
        for (int i = 1; i < n + 1; i++) {
            if ((k - a[i] + a[i-1]) % n != 0 || (k - a[i] + a[i-1]) / n < 0) {
                isValid = false;
                break;
            }
        }
        if (isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


    return 0;
}
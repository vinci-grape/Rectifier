#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int square = n * n;
    vector<int> odd, even;
    for (int i = 1; i <= square; i++) {
        if (i % 2 == 0) {
            even.push_back(i);
        } else {
            odd.push_back(i);
        }
    }
    int loop = square / n;
    int div = loop / 2;
    for (int i = 1; i <= loop; i++) {
        for (int j = 0; j < div; j++) {
            if (i % 2 == 1) {
                cout << odd.back() << " " << even.front() << " ";
                odd.pop_back();
                even.erase(even.begin());
            } else {
                cout << even.back() << " " << odd.front() << " ";
                even.pop_back();
                odd.erase(odd.begin());
            }
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (N == 1 && a[0] > 1) {
        cout << 1 << endl;
    } else {
        for (int j = 0; j < N; j++) {
            if (j == 0 || a[j]!= a[j - 1]) {
                int tmp = 1;
                for (int i = j + 1; i < N; i++) {
                    if (a[j] == a[i]) {
                        tmp++;
                    }
                    else{
                        break;
                    }
                }
                if (tmp > a[j]) {
                    cout << tmp - a[j] << endl;
                } else if (tmp < a[j]) {
                    cout << tmp << endl;
                }
            }
        }
    }
    return 0;
}
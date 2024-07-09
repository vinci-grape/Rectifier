#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }
    sort(lst.begin(), lst.end(), greater<int>());
    int od = 0;
    for (int i = 0; i < n; i++) {
        if (lst[i] % 2 != 0) {
            od++;
        }
    }
    int sum = 0;
    bool ok = false;
    for (int i = 0; i < n; i++) {
        if (lst[i] % 2 == 0) {
            sum += lst[i];
        } else {
            if (ok || od > 1) {
                sum += lst[i];
                od--;
                ok = !ok;
            }
        }
    }
    cout << sum << endl;
    
    return 0;
}
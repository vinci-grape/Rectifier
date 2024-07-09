#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    long x;
    cin >> N >> x;
    vector<long> sweet(N);
    for (int i = 0; i < N; i++) {
        cin >> sweet[i];
    }
    sort(sweet.begin(), sweet.end());
    int num = 0;
    for (int i = 0; i < N; i++) {
        if (x - sweet[num] >= 0) {
            x = x - sweet[num];
            num++;
        } else {
            break;
        }
    }
    if (num == N && x > 0) {
        num -= 1;
    }
    cout << num << endl;
    return 0;
}
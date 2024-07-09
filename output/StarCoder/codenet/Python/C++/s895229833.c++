#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    int count_best = 0, count_tmp = 0;
    for (int i = 0; i < N-1; i++) {
        if (H[i] >= H[i+1]) {
            count_tmp += 1;
        } else {
            if (count_tmp > count_best) {
                count_best = count_tmp;
            }
            count_tmp = 0;
        }
    }
    if (count_tmp > count_best) {
        count_best = count_tmp;
    }
    cout << count_best << endl;
    return 0;
}
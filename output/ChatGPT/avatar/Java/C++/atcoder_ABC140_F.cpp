#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int size = (1 << N);
    vector<int> S(size);
    vector<bool> spawned(size, false);
    spawned[size - 1] = true;
    for (int i = 0; i < size; i++) {
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    vector<int> active;
    active.push_back(S[size - 1]);
    spawned[size - 1] = true;
    for (int i = 0; i < N; i++) {
        sort(active.rbegin(), active.rend());
        vector<int> activated;
        int next = size - 1;
        for (int slime : active) {
            while (next >= 0 && (S[next] >= slime || spawned[next])) {
                next--;
            }
            if (next < 0) {
                cout << "No" << endl;
                return 0;
            }
            spawned[next] = true;
            activated.push_back(S[next]);
        }
        active.insert(active.end(), activated.begin(), activated.end());
    }
    cout << "Yes" << endl;
    return 0;
}
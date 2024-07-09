#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N, 0);

    for (int i = 0; i < K; i++) {
        int d;
        cin >> d;
        vector<int> AA(d);
        for (int j = 0; j < d; j++) {
            cin >> AA[j];
            A[AA[j] - 1] = 1;
        }
    }

    int n = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == 0) {
            n++;
        }
    }
    cout << n << endl;

    return 0;
}
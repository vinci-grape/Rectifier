#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int lcm(int x, int y) {
    return (x * y) / __gcd(x, y);
}

int lcm_list(vector<int>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 1, lcm);
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Divide all elements of A by 2
    for (int i = 0; i < N; i++) {
        A[i] /= 2;
    }

    // Check if all elements have the same number of division by 2
    int count_div_2 = -1;
    for (int i = 0; i < N; i++) {
        int cnt = 0;
        while (A[i] % 2 == 0) {
            A[i] /= 2;
            cnt++;
        }
        if (count_div_2 == -1) {
            count_div_2 = cnt;
        } else if (cnt != count_div_2) {
            cout << 0 << endl;
            return 0;
        }
    }

    // Calculate the lcm of all elements in A
    int my_lcm = lcm_list(A);
    if (my_lcm > M) {
        cout << 0 << endl;
        return 0;
    }

    int tmp = M / my_lcm;
    int ans = (tmp + 1) / 2;
    cout << ans << endl;

    return 0;
}
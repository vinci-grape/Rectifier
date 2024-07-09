#include <iostream>
#include <vector>
using namespace std;

int bis(int x, int y, vector<int>& A) {
    if (y == x + 1) {
        return y;
    }
    else if (is_possible((x + y) / 2, A)) {
        return bis(x, (x + y) / 2, A);
    }
    else {
        return bis((x + y) / 2, y, A);
    }
}

vector<pair<int, int>> cut(vector<pair<int, int>>& array, int index) {
    if (index < 1) {
        return {};
    }
    if (index <= array[0].first) {
        return { make_pair(index, array[0].second) };
    }
    for (int i = array.size() - 1; i > 0; i--) {
        if (array[i - 1].first < index) {
            return vector<pair<int, int>>(array.begin(), array.begin() + i) + vector<pair<int, int>>(1, make_pair(index, array[i].second));
        }
    }
}

bool is_possible(int K, vector<int>& A) {
    vector<pair<int, int>> dp = { make_pair(A[0], 0) };
    for (int i = 1; i < A.size(); i++) {
        if (A[i] <= dp.back().first) {
            dp = cut(dp, A[i]);
        }
        else {
            dp.push_back(make_pair(A[i], 0));
        }
        bool is_added = false;
        for (int j = dp.size() - 1; j >= 0; j--) {
            if (dp[j].second < K - 1) {
                dp = cut(dp, dp[j].first - 1);
                dp.push_back(make_pair(dp[j].first, dp[j].second + 1));
                if (dp.back().first < A[i]) {
                    dp.push_back(make_pair(A[i], 0));
                }
                is_added = true;
                break;
            }
        }
        if (!is_added) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << bis(0, N, A) << endl;

    return 0;
}
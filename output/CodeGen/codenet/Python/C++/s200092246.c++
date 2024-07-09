#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> ans;
    for (int i = 1; i <= N; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
        if (sum < N) continue;
        else {
            ans.push_back(i - 1);
            break;
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        if (i + 1!= ans[i]) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
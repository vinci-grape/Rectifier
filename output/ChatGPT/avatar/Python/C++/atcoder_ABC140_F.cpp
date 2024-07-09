#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int I() {
    int x;
    cin >> x;
    return x;
}

vector<int> LI() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

string main() {
    int N = I();
    vector<int> S = LI();
    sort(S.begin(), S.end(), greater<int>());
    vector<bool> flag(S.size(), true);
    vector<int> cur;
    cur.push_back(S[0]);
    flag[0] = false;
    for (int i = 0; i < N; i++) {
        int j = 0;
        int jM = cur.size();
        for (int k = 0; k < S.size(); k++) {
            if (flag[k] && S[k] < cur[j]) {
                cur.push_back(S[k]);
                j += 1;
                flag[k] = false;
                if (j == jM) {
                    break;
                }
            }
        }
        else {
            return "No";
        }
        sort(cur.begin(), cur.end(), greater<int>());
    }
    return "Yes";
}

int main() {
    cout << main() << endl;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string get_last_dict(string s_str, int N) {
    string U = s_str + string(s_str.rbegin(), s_str.rend());
    char c = *min_element(s_str.begin(), s_str.end());
    int p = U.find(c);
    int minindex = p;
    p += 1;
    while (p <= N) {
        if (U[p] == c) {
            if (check_normal_dict(U, minindex, p, N)) {
                minindex = p;
            }
        }
        p += 1;
    }
    return U.substr(minindex, N);
}

bool check_normal_dict(string u, int pointer1, int pointer2, int N) {
    for (int i = 0; i < N; i++) {
        if (u[pointer1 + i] > u[pointer2 + i]) {
            return true;
        }
        else if (u[pointer1 + i] < u[pointer2 + i]) {
            return false;
        }
    }
    return false;
}

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    bool aaaa = false;
    if (K >= 15) {
        aaaa = true;
    }
    else if (pow(2, K) >= N) {
        aaaa = true;
    }
    if (aaaa) {
        char min_char = *min_element(S.begin(), S.end());
        string result = string(N, min_char);
        cout << result << endl;
        return 0;
    }
    S = get_last_dict(S, N);
    if (K == 1) {
        cout << S << endl;
    }
    else {
        int count = 0;
        for (char c : S) {
            if (c == S[0]) {
                count += 1;
            }
            else {
                break;
            }
        }
        if (count * pow(2, K - 1) >= N) {
            string result = string(N, S[0]);
            cout << result << endl;
        }
        else {
            string result = string(count * (pow(2, K - 1) - 1), S[0]) + S;
            cout << result.substr(0, N) << endl;
        }
    }

    return 0;
}
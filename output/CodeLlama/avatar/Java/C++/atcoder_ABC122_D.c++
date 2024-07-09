#include <bits/stdc++.h>
using namespace std;

int N;
const long MOD = 1000000007L;
string TOKENS[] = {"A", "C", "G", "T"};
map<string, long> memo[100001];

long calc() {
    return dfs(0, "TTT");
}

bool isOK(string last4) {
    if (last4.find("AGC") != string::npos) {
        return false;
    }
    for (int i = 0; i < 3; ++i) {
        char vals[4];
        last4.copy(vals, 4);
        vals[i] = last4[i + 1];
        vals[i + 1] = last4[i];
        string s(vals);
        if (s.find("AGC") != string::npos) {
            return false;
        }
    }
    return true;
}

long dfs(int current, string last3) {
    if (memo[current].find(last3) != memo[current].end()) {
        return memo[current][last3];
    }
    if (current == N) {
        return 1;
    }
    long result = 0;
    for (string c : TOKENS) {
        if (isOK(last3 + c)) {
            result = (result + dfs(current + 1, last3.substr(1, last3.length()) + c)) % MOD;
        }
    }
    memo[current][last3] = result;
    return result;
}

int main() {
    cin >> N;
    cout << calc() << endl;
}
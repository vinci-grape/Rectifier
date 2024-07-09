#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mod = 1000000007;
    vector<map<string, int>> memo(n + 1);
    function<int(int, string)> dfs = [&](int cur, string last3) {
        if (memo[cur].count(last3)) return memo[cur][last3];
        if (cur == n) return 1;
        int ret = 0;
        for (char c = 'A'; c <= 'G'; c++) {
            string last4 = last3.substr(1) + c;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3]!= 'A' || last4[3]!= 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' || last4[3] == 'G')) continue;
            if (last4.substr(0, 3) == "AGC" &&
                (last4[3] == 'A' && last4[3] == '
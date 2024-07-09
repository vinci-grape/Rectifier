#include <iostream>
#include <string>
#include <deque>
#include <cmath>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    deque<string> data;
    size_t pos = 0;
    string token;
    while ((pos = input.find(' ')) != string::npos) {
        token = input.substr(0, pos);
        data.push_back(token);
        input.erase(0, pos + 1);
    }
    data.push_back(input);
    
    auto input_parser = data.begin();
    auto gw = [&]() -> string {
        string data = *input_parser;
        input_parser++;
        return data;
    };
    auto gi = [&]() -> int {
        string data = gw();
        return stoi(data);
    };
    
    int MOD = pow(10, 9) + 7;
    int N = gi();
    int K = gi();
    string S = gw();
    int seg_cnt = 0;
    for (int i = 0; i < N - 1; i++) {
        if (S[i] != S[i + 1]) {
            seg_cnt++;
        }
    }
    int cur_happy = N - 1 - seg_cnt;
    int ans;
    if (2 * K >= seg_cnt) {
        ans = N - 1;
    } else {
        ans = cur_happy + 2 * K;
    }
    cout << ans << endl;

}
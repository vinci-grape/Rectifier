#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class atcoder_ABC122_D {
    int N;
    long MOD = 1000000007L;
    vector<string> TOKENS = {"A", "C", "G", "T"};
    vector<unordered_map<string, long>> memo;
    
public:
    atcoder_ABC122_D() {
        cin >> N;
        this->memo.resize(N + 1);
    }
    
    long calc() {
        return dfs(0, "TTT");
    }
    
    bool isOK(string last4) {
        if (last4.find("AGC") != string::npos) {
            return false;
        }
        
        for (int i = 0; i < 3; ++i) {
            string s = last4;
            swap(s[i], s[i + 1]);
            if (s.find("AGC") != string::npos) {
                return false;
            }
        }
        
        return true;
    }
    
    long dfs(int current, string last3) {
        if (memo[current].count(last3) > 0) {
            return memo[current][last3];
        }
        
        if (current == N) {
            return 1;
        }
        
        long result = 0;
        
        for (string c : TOKENS) {
            if (isOK(last3 + c)) {
                result = (result + dfs(current + 1, last3.substr(1) + c)) % MOD;
            }
        }
        
        memo[current][last3] = result;
        return result;
    }
};

int main() {
    atcoder_ABC122_D ins;
    cout << ins.calc() << endl;
}
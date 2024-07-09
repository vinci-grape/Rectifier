#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string run(string s, string t) {
        string ss = s;
        sort(ss.begin(), ss.end());
        string tt = t;
        sort(tt.begin(), tt.end());
        if (ss == tt)
            return "Yes";
        else
            return "No";
    }
};

int main() {
    string s = "";
    string t = "";
    cin >> s >> t;
    Solution sol;
    cout << sol.run(s, t) << endl;
    return 0;
}
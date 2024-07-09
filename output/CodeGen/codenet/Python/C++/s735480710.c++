#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res;
        deque<string> words;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] =='') {
                if (!words.empty()) {
                    res += words.front() + " ";
                    words.pop_front();
                }
            } else {
                words.push_back(s.substr(i, 1));
            }
        }
        if (!words.empty()) {
            res += words.front();
        }
        return res;
    }
};

int main() {
    Solution s;
    cout << s.reverseWords("  hello  ") << endl;
    return 0;
}
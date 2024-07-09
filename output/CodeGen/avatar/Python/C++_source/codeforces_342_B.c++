#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        string res;
        int len = s.size();
        int step = numRows;
        int i = 0;
        while (i < len) {
            int j = i;
            for (int k = 1; k < step; ++k) {
                if (j + k >= len)
                    break;
                res += s[j];
                j += k;
                if (j < len)
                    res += s[j];
                j += step - 2 * k - 2;
                if (j < len)
                    res += s[j];
                j += k;
            }
            i += step;
        }
        return res;
    }
};

int main() {
    Solution s;
    cout << s.convert("ABC", 2) << endl;
    return 0;
}
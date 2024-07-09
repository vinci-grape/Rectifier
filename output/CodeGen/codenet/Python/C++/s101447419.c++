#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> hour(12,0);
        for (auto& t : timePoints) {
            int h = t[0]-'0';
            int m = t[1]-'0';
            int s = t[2]-'0';
            hour[h] += s*60+m;
        }
        sort(hour.begin(),hour.end(),greater<int>());
        int ans = 0;
        for (int i = 0; i < 12; ++i) {
            for (int j = i+1; j < 12; ++j) {
                int diff = hour[j]-hour[i];
                if (diff > 0) {
                    ans = max(ans,diff);
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> timePoints = {"23:59","00:00"};
    cout << s.findMinDifference(timePoints) << endl;
    return 0;
}
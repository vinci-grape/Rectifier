class Solution {
public:
    int minCostII(vector<vector<int>>& costs) {
        int n = costs.size();
        if (n == 0) return 0;
        int q = costs[0][0];
        int h = costs[0][1];
        int s = costs[0][2];
        int d = costs[0][3];
        int min_1 = min(q*4, h*2, q*2+h, s);
        int min_2 = min(min_1*2, d);
        int ans = 0;
        for (int i = 1; i < n; i++) {
            q = costs[i][0];
            h = costs[i][1];
            s = costs[i][2];
            d = costs[i][3];
            ans += (i % 2) * min_1 + (i // 2) * min_2;
        }
        return ans;
    }
};
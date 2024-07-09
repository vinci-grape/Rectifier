public class s134430594 {
    int l;
    int r;
    int val;

    Ban() {}

    Ban(int l_, int r_, int val_) {
        l = l_;
        r = r_;
        val = val_;
    }
}

class Sp {
    static final int LIM = 20; 
    static final int N = 2e5 + 7;

    int mn[LIM][N];
    int pw[N];

    void init(int[] a) {
        int n = a.length;
        for (int i = 0; i < n; i++) {
            mn[0][i] = a[i]; 
        }
        for (int i = 0; i + 1 < LIM; i++) {
            for (int j = 0; j + (1 << (i + 1)) <= n; j++) {
                mn[i + 1][j] = max(mn[i][j], mn[i][j + (1 << i)]);
            }
        }
        pw[1] = 0;
        for (int i = 2; i < N; i++) {
            pw[i] = pw[i / 2] + 1;
        }
    } 

    int get(int l, int r) {
        r++;
        int p = pw[r - l];
        return min(mn[p][l], mn[p][r - (1 << p)]);
    }
}

class Solution {
    public:
        int minSubArrayLen(int s, vector<int>& nums) {
            if (nums.size() == 0) return 0;
            int n = nums.size();
            int ans = 0;
            int l = 0;
            int r = 0;
            while (r < n) {
                if (nums[r] > s) {
                    r++;
                    continue;
                }
                if (nums[r] < s) {
                    l = r + 1;
                    r++;
                    continue;
                }
                if (nums[r] == s) {
                    r++;
                    ans++;
                    continue;
                }
                if (nums[r] > s) {
                    l = r + 1;
                    r++;
                    continue;
                }
                if (nums[r] < s) {
                    r++;
                    continue;
                }
            }
            return ans;
        }
};

int main() {
    Solution s;
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << s.minSubArrayLen(5, a) << endl;
    return 0;
}
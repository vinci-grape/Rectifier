#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class atcoder_ABC132_F {
public:
    long mod = (long)1e9 + 7;
    int n;
    int k;
    vector<int> len;
    int q;
    long *dp;
    atcoder_ABC132_F(int _n, int _k) {
        n = _n;
        k = _k;
        len.resize(n);
        for (int i = 1; i <= n; ++i) {
            len[i - 1] = i;
        }
        q = len.size();
        dp = new long[k * (q + 1)];
        for (int i = 1; i <= q; ++i) {
            dp[i] = len[i - 1] + dp[i - 1];
            dp[i] %= mod;
        }
        for (int i = 1; i < k; ++i) {
            for (int j = 1; j <= q; ++j) {
                dp[i * (q + 1) + j] = dp[i * (q + 1) + j - 1] + dp[(i - 1) * (q + 1) + q - j + 1] * len[j - 1];
                dp[i * (q + 1) + j] %= mod;
            }
        }
    }
    long query(int l, int r) {
        if (l > r) {
            return 0;
        }
        if (l == r) {
            return dp[l];
        }
        return dp[k * (q + 1) + r] - dp[k * (q + 1) + l - 1];
    }
};

// C++ Code:

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class atcoder_ABC132_F {
public:
    long mod = (long)1e9 + 7;
    int n;
    int k;
    vector<int> len;
    int q;
    long *dp;
    atcoder_ABC132_F(int _n, int _k) {
        n = _n;
        k = _k;
        len.resize(n);
        for (int i = 1; i <= n; ++i) {
            len[i - 1] = i;
        }
        q = len.size();
        dp = new long[k * (q + 1)];
        for (int i = 1; i <= q; ++i) {
            dp[i] = len[i - 1] + dp[i - 1];
            dp[i] %= mod;
        }
        for (int i = 1; i < k; ++i) {
            for (int j = 1; j <= q; ++j) {
                dp[i * (q + 1) + j] = dp[i * (q + 1) + j - 1] + dp[(i - 1) * (q + 1) + q - j + 1] * len[j - 1];
                dp[i * (q + 1) + j] %= mod;
            }
        }
    }
    long query(int l, int r) {
        if (l > r) {
            return 0;
        }
        if (l == r) {
            return dp[l];
        }
        return dp[k * (q + 1) + r] - dp[k * (q + 1) + l - 1];
    }
};

// C++ Code:

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class atcoder_ABC132_F {
public:
    long mod = (long)1e9 + 7;
    int n;
    int k;
    vector<int> len;
    int q;
    long *dp;
    atcoder_ABC132_F(int _n, int _k) {
        n = _n;
        k = _k;
        len.resize(n);
        for (int i = 1; i <= n; ++i) {
            len[i - 1] = i;
        }
        q = len.size();
        dp = new long[k * (q + 1)];
        for (int i = 1; i <= q; ++i) {
            dp[i] = len[i - 1] + dp[i - 1];
            dp[i] %= mod;
        }
        for (int i = 1; i < k; ++i) {
            for (int j = 1; j <= q; ++j) {
                dp[i * (q + 1) + j] = dp[i * (q + 1) + j - 1] + dp[(i - 1) * (q + 1) + q - j + 1] * len[j - 1];
                dp[i * (q + 1) + j] %= mod;
            }
        }
    }
    long query(int l, int r) {
        if (l > r) {
            return 0;
        }
        if (l == r) {
            return dp[l];
        }
        return dp[k * (q + 1) + r] - dp[k * (q + 1) + l - 1];
    }
};

// C++ Code:

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class atcoder_ABC132_F {
public:
    long mod = (long)1e9 + 7;
    int n;
    int k;
    vector<int> len;
    int q;
    long *dp;
    atcoder_ABC132_F(int _n, int _k) {
        n = _n;
        k = _k;
        len.resize(n);
        for (int i = 1; i <= n; ++i) {
            len[i - 1] = i;
        }
        q = len.size();
        dp = new long[k * (q + 1)];
        for (int i = 1; i <= q; ++i) {
            dp[i] = len[i - 1] + dp[i - 1];
            dp[i] %= mod;
        }
        for (int i = 1; i < k; ++i) {
            for (int j = 1; j <= q; ++j) {
                dp[i * (q + 1) + j] = dp[i * (q + 1) + j - 1] + dp[(i - 1) * (q + 1) + q - j + 1] * len[j - 1];
                dp[i * (q + 1) + j] %= mod;
            }
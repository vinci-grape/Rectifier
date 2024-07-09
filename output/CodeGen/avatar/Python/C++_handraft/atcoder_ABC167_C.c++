#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
using namespace std;

typedef long long ll;

const int maxn = 100005;
const int maxm = 100005;
const int inf = 0x3f3f3f3f;

int n, m, x;
int c[maxn][maxm];
int pre[maxn];
int l[maxm];
int rem[maxm];
int ans;

int main() {
    scanf("%d%d%d", &n, &m, &x);
    for (int i = 1; i <= n; ++i) scanf("%d", &pre[i]);
    for (int i = 1; i <= n; ++i) scanf("%d", &c[i][0]);
    for (int i = 1; i <= m; ++i) scanf("%d", &l[i]);
    for (int i = 1; i <= m; ++i) scanf("%d", &rem[i]);
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (c[j][i] < x) {
                rem[i] = j;
                break;
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][0] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][i] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][0] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][i] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][0] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][i] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][0] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][i] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][0] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][i] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][0] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][i] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][0] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][i] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][0] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (rem[i] == 0) {
            for (int j = 1; j <= n; ++j) {
                if (c[j][i] < x) {
                    rem[i] = j;
                    break;
                }
            }
        }
    }
    for (int i = 1; i
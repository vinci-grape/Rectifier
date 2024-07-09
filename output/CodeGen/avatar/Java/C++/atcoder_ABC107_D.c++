#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
using namespace std;

typedef long long ll;

const int maxn = 1005;

int n;
int arr[maxn];

struct Task {
    int solve(int arr[]) {
        int n = arr.length;
        sort(arr, arr + n);
        long total = (long)n * (n + 1) / 2;
        int l = 0, r = n - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            int target = arr[mid];
            int cur = 0;
            long cnt = 0;
            long bit[2 * n + 2];
            for (int x = n + 1; x < bit.size(); x += x & -x) bit[x]++;
            for (int i = 0; i < n; i++) {
                cur += arr[i] <= target? 1 : - 1;
                for (int x = cur + n + 1; x < bit.size(); x += x & -x) bit[x]++;
                for (int x = cur + n; x > 0; x -= x & -x) cnt += bit[x];
            }
            if (cnt >= total / 2 + 1) r = mid;
            else l = mid + 1;
        }
        return arr[l];
    }
};

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        Task sol;
        printf("%d\n", sol.solve(arr));
    }
    return 0;
}
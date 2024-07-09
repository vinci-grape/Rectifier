#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SegmentTree {
private:
    int size;
    int default_val;
    vector<int> seg;

public:
    SegmentTree(int size, int default_val) {
        this->size = pow(2, (int)log2(size - 1) + 1);
        this->default_val = default_val;
        seg.resize(2 * this->size - 1, default_val);
    }

    int segfunc(int x, int y) {
        return max(x, y);
    }

    void update(int k, int x) {
        k += size - 1;
        seg[k] = x;
        while (k > 0) {
            k = (k - 1) / 2;
            seg[k] = segfunc(seg[2 * k + 1], seg[2 * k + 2]);
        }
    }

    int query(int p, int q) {
        if (q <= p) {
            return default_val;
        }
        p += size - 1;
        q += size - 2;
        int ret = default_val;
        while (q - p > 1) {
            if (p % 2 == 0) {
                ret = segfunc(ret, seg[p]);
            }
            if (q % 2 == 1) {
                ret = segfunc(ret, seg[q]);
                q--;
            }
            p = p / 2;
            q = (q - 1) / 2;
        }
        ret = segfunc(segfunc(ret, seg[p]), seg[q]);
        return ret;
    }

    void seg_print() {
        for (int i = 0; i < seg.size(); i++) {
            cout << seg[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    vector<int> ans(N);
    for (int i = 0; i < N; i++) {
        ans[i] = i + 1;
    }
    SegmentTree left_seg(N, 0);
    for (int i = 0; i < N; i++) {
        int num = a[i];
        ans[num - 1] *= (i + 1 - left_seg.query(0, num));
        left_seg.update(num - 1, i + 1);
    }
    SegmentTree right_seg(N, 0);
    for (int i = N - 1; i >= 0; i--) {
        int num = a[i];
        ans[num - 1] *= ((N - i) - right_seg.query(0, num));
        right_seg.update(num - 1, N - i);
    }
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += ans[i];
    }
    cout << sum << endl;

    return 0;
}
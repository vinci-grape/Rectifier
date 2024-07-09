class BIT {
    int size;
    vector<int> tree;
    int depth;

public:
    BIT(int N) {
        size = N;
        tree.resize(N + 1);
        depth = n.bit_length();
    }

    int _bitsum(int i) {
        int ret = 0;
        while (i) {
            ret += tree[i];
            i ^= i & -i;
        }
        return ret;
    }

    int bitsum(int l, int r = -1) {
        if (r == -1) {
            return _bitsum(l);
        }
        else {
            return _bitsum(r) - _bitsum(l);
        }
    }

    void bitadd(int i, int x) {
        i += 1;
        while (i <= size) {
            tree[i] += x;
            i += i & -i;
        }
    }
};

int main() {
    int n;
    cin >> n;
    int m = n * (n + 1) / 4;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> d;
    vector<int> _a = a;
    _a.push_back(0);
    sort(_a.begin(), _a.end());
    _a.erase(unique(_a.begin(), _a.end()), _a.end());

    for (int i = 0; i < _a.size(); i++) {
        d[_a[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        a[i] = d[a[i]];
    }

    auto check = [&](int X) {
        vector<int> b(n + 1);
        for (int i = 0; i < n; i++) {
            b[i + 1] = (a[i] >= X) * 2 - 1;
        }
        for (int i = 0; i < n; i++) {
            b[i + 1] += b[i];
        }
        int c = *min_element(b.begin(), b.end());
        for (int i = 0; i <= n; i++) {
            b[i] -= c;
        }

        BIT bit(*max_element(b.begin(), b.end()) + 2);
        int ans = 0;
        for (int x : b) {
            ans += bit.bitsum(x + 1);
            bit.bitadd(x, 1);
        }
        return ans >= m;
    };

    vector<int> t = {static_cast<int>(_a.size()), 0};
    while (t[0] - t[1] > 1) {
        int mid = (t[0] + t[1]) / 2;
        t[check(mid)] = mid;
    }

    cout << _a[t[1]] << endl;

}
class BIT {
public:
    int size;
    vector<int> tree;
    int depth;
    BIT(int n) {
        size = n;
        tree = vector<int>(n + 1, 0);
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
    int bitsum(int l, int r = 0) {
        if (r == 0) {
            return _bitsum(l);
        } else {
            return _bitsum(r) - _bitsum(l);
        }
    }
    void bitadd(int i, int x) {
        i += 1;
        while (i <= size) {
            tree[i] += x;
            i += i & -i;
        }
        return;
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
    int maxa = *max_element(a.begin(), a.end());
    int mina = *min_element(a.begin(), a.end());
    int range = max(maxa, -mina);
    vector<int> _a(range + 1);
    for (int i = 0; i < n; i++) {
        _a[a[i]]++;
    }
    for (int i = 1; i <= range; i++) {
        _a[i] += _a[i - 1];
    }
    for (int i = 0; i < n; i++) {
        a[i] = _a[a[i]] - 1;
    }
    int l = 0, r = range;
    while (r - l > 1) {
        int mid = (l + r) / 2;
        if (check(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << _a[l] << endl;
    return 0;
}
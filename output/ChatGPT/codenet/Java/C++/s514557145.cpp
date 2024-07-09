#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long MOD1 = 1000000007;
const long long MOD2 = 998244353;
vector<long long> tenmod;
const long long inv9 = modInv(9);

struct S {
    static const S E;
    long long sum;
    int l;
    int r;
    S (long long sum, int l, int r) : sum(sum), l(l), r(r) {}
    static S op(S s1, S s2) {
        long long sum = s1.sum + s2.sum;
        if (sum >= MOD2) {
            sum -= MOD2;
        }
        return S(sum, min(s1.l, s2.l), max(s1.r, s2.r));
    }
    static S map(F f, S s) {
        long long c = (tenmod[(f.N - s.l)] - tenmod[(f.N - s.r - 1)]);
        if (c < 0) {
            c += MOD2;
        }
        return S(((f.D * c) % MOD2 * inv9) % MOD2, s.l, s.r);
    }
};

const S S::E = S(0, INT_MAX / 2, INT_MIN / 2);

struct F {
    static const F I;
    long long D;
    int N;
    F(long long D, int N) : D(D), N(N) {}
    static F composite(F f, F g) {
        return F(f.D, f.N);
    }
};

const F F::I = F(0, 0);

long long modInv(long long x) {
    return modPow(x, MOD2 - 2);
}

long long modPow(long long x, long long y) {
    long long z = 1;
    while (y > 0) {
        if (y % 2 == 0) {
            x = (x * x) % MOD2;
            y /= 2;
        } else {
            z = (z * x) % MOD2;
            y--;
        }
    }
    return z;
}

template<class S, class F>
struct LazySegTree {
    const int MAX;
    const int N;
    const int Log;
    const function<S(S, S)> Op;
    const S E;
    const function<S(F, S)> Mapping;
    const function<F(F, F)> Composition;
    const F Id;
    vector<S> Dat;
    vector<F> Laz;

    LazySegTree(int n, const function<S(S, S)> op, const S e, const function<S(F, S)> mapping, const function<F(F, F)> composition, const F id)
        : MAX(n), N(1), Log(0), Op(op), E(e), Mapping(mapping), Composition(composition), Id(id), Dat(2 * n), Laz(n) {
        while (N < n) N <<= 1, Log++;
        fill(Dat.begin(), Dat.end(), E);
        fill(Laz.begin(), Laz.end(), Id);
    }

    LazySegTree(vector<S>& dat, const function<S(S, S)> op, const S e, const function<S(F, S)> mapping, const function<F(F, F)> composition, const F id)
        : LazySegTree(dat.size(), op, e, mapping, composition, id) {
        build(dat);
    }

    void build(vector<S>& dat) {
        int l = dat.size();
        copy(dat.begin(), dat.end(), Dat.begin() + N);
        for (int i = N - 1; i > 0; i--) {
            Dat[i] = Op(Dat[i << 1 | 0], Dat[i << 1 | 1]);
        }
    }

    void push(int k) {
        if (Laz[k] == Id) return;
        int lk = k << 1 | 0, rk = k << 1 | 1;
        Dat[lk] = Mapping(Laz[k], Dat[lk]);
        Dat[rk] = Mapping(Laz[k], Dat[rk]);
        if (lk < N) Laz[lk] = Composition(Laz[k], Laz[lk]);
        if (rk < N) Laz[rk] = Composition(Laz[k], Laz[rk]);
        Laz[k] = Id;
    }

    void pushTo(int k) {
        for (int i = Log; i > 0; i--) push(k >> i);
    }

    void pushTo(int lk, int rk) {
        for (int i = Log; i > 0; i--) {
            if (((lk >> i) << i) != lk) push(lk >> i);
            if (((rk >> i) << i) != rk) push(rk >> i);
        }
    }

    void updateFrom(int k) {
        k >>= 1;
        while (k > 0) {
            Dat[k] = Op(Dat[k << 1 | 0], Dat[k << 1 | 1]);
            k >>= 1;
        }
    }

    void updateFrom(int lk, int rk) {
        for (int i = 1; i <= Log; i++) {
            if (((lk >> i) << i) != lk) {
                int lki = lk >> i;
                Dat[lki] = Op(Dat[lki << 1 | 0], Dat[lki << 1 | 1]);
            }
            if (((rk >> i) << i) != rk) {
                int rki = (rk - 1) >> i;
                Dat[rki] = Op(Dat[rki << 1 | 0], Dat[rki << 1 | 1]);
            }
        }
    }

    void set(int p, S x) {
        exclusiveRangeCheck(p);
        p += N;
        pushTo(p);
        Dat[p] = x;
        updateFrom(p);
    }

    S get(int p) {
        exclusiveRangeCheck(p);
        p += N;
        pushTo(p);
        return Dat[p];
    }

    S allProd() {
        return Dat[1];
    }

    void apply(int p, F f) {
        exclusiveRangeCheck(p);
        p += N;
        pushTo(p);
        Dat[p] = Mapping(f, Dat[p]);
        updateFrom(p);
    }

    void apply(int l, int r, F f) {
        if (l > r) {
            throw invalid_argument("Invalid range");
        }
        inclusiveRangeCheck(l);
        inclusiveRangeCheck(r);
        if (l == r) return;
        l += N; r += N;
        pushTo(l, r);
        for (int l2 = l, r2 = r; l2 < r2;) {
            if ((l2 & 1) == 1) {
                Dat[l2] = Mapping(f, Dat[l2]);
                if (l2 < N) Laz[l2] = Composition(f, Laz[l2]);
                l2++;
            }
            if ((r2 & 1) == 1) {
                r2--;
                Dat[r2] = Mapping(f, Dat[r2]);
                if (r2 < N) Laz[r2] = Composition(f, Laz[r2]);
            }
            l2 >>= 1; r2 >>= 1;
        }
        updateFrom(l, r);
    }

    int maxRight(int l, const function<bool(S)> g) {
        inclusiveRangeCheck(l);
        if (!g(E)) {
            throw invalid_argument("Identity element must satisfy the condition");
        }
        if (l == MAX) return MAX;
        l += N;
        pushTo(l);
        S sum = E;
        do {
            l >>= __builtin_ctz(l);
            if (!g(Op(sum, Dat[l]))) {
                while (l < N) {
                    push(l);
                    l = l << 1;
                    if (g(Op(sum, Dat[l]))) {
                        sum = Op(sum, Dat[l]);
                        l++;
                    }
                }
                return l - N;
            }
            sum = Op(sum, Dat[l]);
            l++;
        } while ((l & -l) != l);
        return MAX;
    }

    int minLeft(int r, const function<bool(S)> g) {
        inclusiveRangeCheck(r);
        if (!g(E)) {
            throw invalid_argument("Identity element must satisfy the condition");
        }
        if (r == 0) return 0;
        r += N;
        pushTo(r - 1);
        S sum = E;
        do {
            r--;
            while (r > 1 && (r & 1) == 1) r >>= 1;
            if (!g(Op(Dat[r], sum))) {
                while (r < N) {
                    push(r);
                    r = r << 1 | 1;
                    if (g(Op(Dat[r], sum))) {
                        sum = Op(Dat[r], sum);
                        r--;
                    }
                }
                return r + 1 - N;
            }
            sum = Op(Dat[r], sum);
        } while ((r & -r) != r);
        return 0;
    }

    void exclusiveRangeCheck(int p) {
        if (p < 0 || p >= MAX) {
            throw out_of_range("Index is out of range");
        }
    }

    void inclusiveRangeCheck(int p) {
        if (p < 0 || p > MAX) {
            throw out_of_range("Index is out of range");
        }
    }
};

template<typename T>
istream& operator>>(istream& is, vector<T>& vec) {
    for (auto& x : vec) {
        is >> x;
    }
    return is;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    tenmod.resize(N + 1);
    tenmod[0] = 1;
    for (int j = 1; j <= N; j++) {
        tenmod[j] = (tenmod[j - 1] * 10LL) % MOD2;
    }
    vector<S> dat(N);
    for (int i = 0; i < N; i++) {
        dat[i] = S(tenmod[N - i - 1], i, i);
    }
    LazySegTree<S, F> lazySegTree(dat, S::op, S::E, S::map, F::composite, F::I);
    for (int j = 0; j < Q; j++) {
        int l, r;
        long long D;
        cin >> l >> r >> D;
        l--;
        r--;
        lazySegTree.apply(l, r + 1, F(D, N));
        cout << lazySegTree.allProd().sum << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

class DLazyFaith {
public:
    void solve(int testNumber, LightScanner& in, LightWriter& out) {
        int a = in.ints(), b = in.ints(), q = in.ints();
        long s[a + 2], t[b + 2];
        s[0] = t[0] = -10000000000L;
        for (int i = 0; i < a; i++) {
            s[i + 1] = in.longs();
        }
        for (int i = 0; i < b; i++) {
            t[i + 1] = in.longs();
        }
        s[a + 1] = t[b + 1] = 20000000000L;
        for (int i = 0; i < q; i++) {
            long x = in.longs();
            long sl = x - s[max(0, lower_bound(s, x + 1) - 1)];
            long tl = x - t[max(0, lower_bound(t, x + 1) - 1)];
            long sr = s[lower_bound(s, x)] - x;
            long tr = t[lower_bound(t, x)] - x;
            out.ansln(min(max(sl, tl), max(sr, tr), 2 * sl + tr, 2 * tl + sr, sl + 2 * tr, tl + 2 * sr));
        }
    }

private:
    int lower_bound(long* a, long t) {
        return lower_bound(a, t, 0);
    }

    int lower_bound(long* a, long t, int min) {
        int max = a.length;
        while (min < max) {
            int mid = (min + max) / 2;
            if (t <= a[mid]) {
                max = mid;
            } else {
                min = mid + 1;
            }
        }
        return min;
    }

};

class LightScanner {
public:
    LightScanner(istream& in) {
        in >> noskipws;
        in >> this->in;
    }

    string string() {
        return this->in;
    }

    int ints() {
        return stoi(this->in);
    }

    long longs() {
        return stoll(this->in);
    }

private:
    string in;
};

class LightWriter {
public:
    LightWriter(ostream& out) {
        this->out = &out;
    }

    LightWriter(ostream* out) {
        this->out = out;
    }

    LightWriter print(char c) {
        (*this->out) << c;
        return *this;
    }

    LightWriter print(string s) {
        (*this->out)
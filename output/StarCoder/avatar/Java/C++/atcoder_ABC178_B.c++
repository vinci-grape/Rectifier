#include <bits/stdc++.h>
using namespace std;

class FastReader {
    std::istream *stream;
    std::string buf;
    std::stringstream ss;
    FastReader() : stream(nullptr) {}
    FastReader(std::istream& stream) : stream(&stream) {}
    char getc() {
        return stream->get();
    }
    void ungetc() {
        stream->unget();
    }
    inline int peek() {
        return stream->peek();
    }
    inline int getInt() {
        int x;
        ss >> x;
        return x;
    }
    inline long long getLong() {
        long long x;
        ss >> x;
        return x;
    }
    inline double getDouble() {
        double x;
        ss >> x;
        return x;
    }
    inline string getString() {
        string x;
        ss >> x;
        return x;
    }
    inline void ignore() {
        while (stream->peek() =='' || stream->peek() == '\n' || stream->peek() == '\t') {
            stream->ignore();
        }
    }
    inline void ignoreLine() {
        stream->ignore(10000, '\n');
    }
};

int modPower(int x, int y, int mod) {
    int res = 1;
    x %= mod;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1) res = (res * x) % mod;
        y >>= 1;
        x = (x * x) % mod;
    }
    return res;
}

int main() {
    FastReader in;
    long long a[4];
    for (int i = 0; i < 4; i++) a[i] = in.getLong();
    cout << max(a[0] * a[2], max(a[1] * a[3], max(a[0] * a[3], a[1] * a[2]))) << endl;
}
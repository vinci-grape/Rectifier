#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

class FastReader {
    private:
        char buf[100005];
        int cur;
        int buf_size;
        int toRead;
    public:
        FastReader() {
            buf_size = 100005;
            cur = 0;
            toRead = 0;
            fread(buf, 1, buf_size, stdin);
        }

        void read(char *str) {
            int i = 0;
            while (str[i]!= '\0') {
                i++;
            }
            fread(str, 1, i, stdin);
            toRead = i;
        }

        char read() {
            if (toRead == 0) {
                fread(buf, 1, buf_size, stdin);
                cur = 0;
            }
            char ret = buf[cur];
            cur++;
            toRead--;
            return ret;
        }

        int nextInt() {
            int ret = 0;
            char ch;
            while (!isdigit(ch = read())) {
                if (ch == '-') {
                    ret = -ret;
                }
            }
            ret = ret * 10 + ch - '0';
            while (isdigit(ch = read())) {
                ret = ret * 10 + ch - '0';
            }
            return ret;
        }

        int nextInt(int n) {
            int ret = 0;
            for (int i = 0; i < n; i++) {
                ret = ret * 10 + nextInt();
            }
            return ret;
        }

        long long nextLong() {
            long long ret = 0;
            char ch;
            while (!isdigit(ch = read())) {
                if (ch == '-') {
                    ret = -ret;
                }
            }
            ret = ret * 10 + ch - '0';
            while (isdigit(ch = read())) {
                ret = ret * 10 + ch - '0';
            }
            return ret;
        }

        double nextDouble() {
            double ret = 0;
            char ch;
            while (!isdigit(ch = read())) {
                if (ch == '-') {
                    ret = -ret;
                }
            }
            ret = ret * 10 + ch - '0';
            while (isdigit(ch = read())) {
                ret = ret * 10 + ch - '0';
            }
            return ret;
        }

        string nextString() {
            string ret = "";
            char ch;
            while (true) {
                ch = read();
                if (ch == '"') {
                    break;
                }
                if (ch == '\\') {
                    ch = read();
                    if (ch == 'n') {
                        ret += '\n';
                    } else if (ch == 't') {
                        ret += '\t';
                    } else if (ch == 'r') {
                        ret += '\r';
                    } else if (ch == 'f') {
                        ret += '\f';
                    } else if (ch == 'b') {
                        ret += '\b';
                    } else if (ch == '"') {
                        ret += '"';
                    } else if (ch == '\\') {
                        ret += '\\';
                    } else {
                        ret += ch;
                    }
                } else {
                    ret += ch;
                }
            }
            return ret;
        }
};

class Solution {
    public:
        int atcoder_AGC046_A(int x) {
            int count = 0;
            int tmp = x;
            while (tmp!= 360) {
                tmp = tmp + x;
                if (tmp > 360) {
                    tmp = tmp - 360;
                }
                count++;
            }
            return count;
        }
};

int main() {
    Solution s;
    cout << s.atcoder_AGC046_A(0) << endl;
    cout << s.atcoder_AGC046_A(1) << endl;
    cout << s.atcoder_AGC046_A(2) << endl;
    cout << s.atcoder_AGC046_A(3) << endl;
    cout << s.atcoder_AGC046_A(4) << endl;
    cout << s.atcoder_AGC046_A(5) << endl;
    cout << s.atcoder_AGC046_A(6) << endl;
    cout << s.atcoder_AGC046_A(7) << endl;
    cout << s.atcoder_AGC046_A(8) << endl;
    cout << s.atcoder_AGC046_A(9) << endl;
    cout << s.atcoder_AGC046_A(10) << endl;
    cout << s.atcoder_AGC046_A(11) << endl;
    cout << s.atcoder_AGC046_A(12) << endl;
    cout << s.atcoder_AGC046_A(13) << endl;
    cout << s.atcoder_AGC046_A(14) << endl;
    cout << s.atcoder_AGC046_A(15) << endl;
    cout << s.atcoder_AGC046_A(16) << endl;
    cout << s.atcoder_AGC046_A(17) << endl;
    cout << s.atcoder_AGC046_A(18) << endl;
    cout << s.atcoder_AGC046_A(19) << endl;
    cout << s.atcoder_AGC046_A(20) << endl;
    cout << s.atcoder_AGC046_A(21) << endl;
    cout << s.atcoder_AGC046_A(22) << endl;
    cout << s.atcoder_AGC046_A(23) << endl;
    cout << s.atcoder_AGC046_A(24) << endl;
    cout << s.atcoder_AGC046_A(25) << endl;
    cout << s.atcoder_AGC046_A(26) << endl;
    cout << s.atcoder_AGC046_A(27) << endl;
    cout << s.atcoder_AGC046_A(28) << endl;
    cout << s.atcoder_AG
#include <bits/stdc++.h>
using namespace std;

class MyInput {
private:
    static const int BUFFER_SIZE = 1024;
    char buffer[BUFFER_SIZE];
    int ptr;
    int buflen;
    bool hasNextByte() {
        if(ptr < buflen) {
            return true;
        }else {
            ptr = 0;
            buflen = fread(buffer, 1, BUFFER_SIZE, stdin);
            if(buflen <= 0) {
                return false;
            }
        }
        return true;
    }

    public:
    MyInput() {
        ptr = 0;
        buflen = 0;
    }

    int readByte() {
        if (hasNextByte()) return buffer[ptr++];
        else return -1;
    }

    static bool isPrintableChar(int c) {
        return 33 <= c && c <=126;
    }

    void skipUnprintable() {
        while(hasNextByte() &&!isPrintableChar(buffer[ptr])) ptr++;
    }

    bool hasNext() {
        skipUnprintable();
        return hasNextByte();
    }

    string next() {
        if(!hasNext()) throw new NoSuchElementException();
        string ret = "";
        int b = readByte();
        while(isPrintableChar(b)) {
            ret += (char) b;
            b = readByte();
        }
        return ret;
    }

    long nextLong() {
        if(!hasNext()) throw new NoSuchElementException();
        long n = 0;
        bool minus = false;
        int b = readByte();
        if (b == '-') {
            minus = true;
            b = readByte();
        }
        if(b < '0' || '9' < b) {
            throw new NumberFormatException();
        }
        while(true) {
        if('0' <= b && b <= '9') {
            n *= 10;
            n += b - '0';
        }else if(b == -1 ||!isPrintableChar(b)) {
            return minus? -n : n;
        }else {
            throw new NumberFormatException();
        }
            b = readByte();
        }
	}

    int nextInt() {
        long nl = nextLong();
        if(nl < Integer.MIN_VALUE || nl > Integer.MAX_VALUE) throw new NumberFormatException();
        return (int) nl;
    }

    double nextDouble() {
        return Double.parseDouble(next());
    }
};

class Main {
public:
    void run() {
        MyInput in = new MyInput();
        string Sd = in.next();
        string T = in.next();
        int count = 0;
        char c;
        bool ok = false;
        int first = -1;
        int end = -1;
        for(int j = 0; j < Sd.length(); j++) {
            count = 0;
            for(int i = 0; i+j < Sd.length(); i++) {
                c = Sd.charAt(i+j);
                if(c == '?' || c == T.charAt(count)) {
                    count++;
                    if(count == T.length()) {
                        first = i+j - T.length() + 1;
                        end = i+j;
                        ok = true;
                        break;
                    }
                }else count = 0;

            }
        }
        if(ok) {
            for(int i = 0; i < Sd.length(); i++) {
                if(first <= i && i <= end) {
                    cout << T.charAt(i - first);
                }else {
                    if(Sd.charAt(i) == '?') cout << "a";
                    else cout << Sd.charAt(i);
                }
            }
            cout << endl;
        }else {
            cout << "UNRESTORABLE" << endl;
        }
    }
};

int main() {
    Main m = new Main();
    m.run();
    return 0;
}
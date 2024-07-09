#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

class FastScanner {
    public:
        FastScanner() {
            in = stdin;
            ptr = 0;
            buflen = 0;
        }
        int nextInt() {
            int c = readByte();
            while (c < '0' || '9' < c) {
                if (c == -1) {
                    throw new std::invalid_argument("No digits found");
                }
                c = readByte();
            }
            int n = 0;
            while ('0' <= c && c <= '9') {
                n = n * 10 + c - '0';
                c = readByte();
            }
            return n;
        }
        long nextLong() {
            long n = 0;
            boolean minus = false;
            int c = readByte();
            if (c == '-') {
                minus = true;
                c = readByte();
            }
            if (c < '0' || '9' < c) {
                throw new std::invalid_argument("No digits found");
            }
            while ('0' <= c && c <= '9') {
                n = n * 10 + c - '0';
                c = readByte();
            }
            return minus? -n : n;
        }
        double nextDouble() {
            double n = 0;
            int c = readByte();
            while (c < '0' || '9' < c) {
                if (c == -1) {
                    throw new std::invalid_argument("No digits found");
                }
                c = readByte();
            }
            while ('0' <= c && c <= '9') {
                n = n * 10 + c - '0';
                c = readByte();
            }
            return n;
        }
    private:
        int readByte() {
            if (ptr >= buflen) {
                ptr = 0;
                buflen = in.read(buffer, sizeof(buffer));
                if (buflen <= 0) {
                    throw new std::invalid_argument("No digits found");
                }
            }
            return buffer[ptr++];
        }
    private:
        int ptr = 0;
        int buflen = 0;
        std::istream in;
        char buffer[1024];
};

int main() {
    FastScanner fs;
    int n = fs.nextInt();
    int[] a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = fs.nextInt();
    }
    Arrays.sort(a);
    long sum = 0;
    int count = 0;
    for(int i=0;i<n-1;i++){
        sum+=a[i];
        if(a[i+1]<=2*sum){
            count++;
        }else{
            count = 0;
        }
    }
    cout << count+1 << endl;
    return 0;
}
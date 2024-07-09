#include <iostream>
using namespace std;

long long getValueAtIndex(long long index) {
    return 1 + ((index - 1) * index / 2);
}

void solve() {
    long long position;
    cin >> position;
    long long nrstSeqStartIndx = 1;
    while (getValueAtIndex(nrstSeqStartIndx * 2) < position) {
        nrstSeqStartIndx *= 2;
    }
    while (getValueAtIndex(nrstSeqStartIndx + 1) <= position) {
        nrstSeqStartIndx++;
    }
    long long startIndex = getValueAtIndex(nrstSeqStartIndx);
    cout << (position - startIndex) + 1 << endl;
}

int main() {
    solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define BUFFERSIZE 512000

long getValueAtIndex(long index) {
    return 1 + ((index - 1) * index / 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long position;
    cin >> position;

    long nrstSeqStartIndx = 1;
    while (getValueAtIndex(nrstSeqStartIndx * 2) < position) {
        nrstSeqStartIndx *= 2;
    }
    while (getValueAtIndex(nrstSeqStartIndx + 1) <= position) nrstSeqStartIndx++;
    long startIndex = getValueAtIndex(nrstSeqStartIndx);
    cout << (position - startIndex) + 1 << endl;

    return 0;
}
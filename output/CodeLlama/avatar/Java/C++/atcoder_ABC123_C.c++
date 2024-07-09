#include <bits/stdc++.h>
using namespace std;
int main() {
    long N;
    cin >> N;
    long min = 0;
    for (int i = 0; i < 5; i++) {
        if (i == 0)
            cin >> min;
        else
            min = min < (long)cin.ignore() ? min : (long)cin.ignore();
    }
    cout << ceil((double)N / min) + 4 << endl;
}
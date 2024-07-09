#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int *a = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, a + N);
    int s = 0;
    for (int i = N - 1; i >= 0; i -= 2) {
        s += a[i];
    }
    cout << s << endl;
    delete [] a;
    return 0;
}
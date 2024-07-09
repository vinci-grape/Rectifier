#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,L;
    cin >> N >> L;
    vector<int> aji(N);
    for (int i = 0; i < N; i++) {
        cin >> aji[i];
    }
    if (aji[0] >= 0) {
        aji.erase(aji.begin());
    } else if (aji[N-1] <= 0) {
        aji.erase(aji.end()-1);
    } else {
        aji.erase(aji.begin(), aji.end()-1);
    }
    cout << sum(aji) << endl;
    return 0;
}
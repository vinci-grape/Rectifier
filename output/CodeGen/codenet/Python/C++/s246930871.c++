#include <iostream>
using namespace std;
int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int ans = A * (N/(A+B)) + min(A, N%(A+B));
    cout << ans << endl;
    return 0;
}
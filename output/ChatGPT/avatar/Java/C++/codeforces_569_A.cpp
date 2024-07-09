#include <iostream>
using namespace std;

int main() {
    int T, S, q;
    cin >> T >> S >> q;
    long long previous = S;
    int answer = 0;
    while (previous < T) {
        answer++;
        previous *= q;
    }
    cout << answer << endl;
}
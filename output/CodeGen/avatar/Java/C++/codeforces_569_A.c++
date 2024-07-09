#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int T, S, q;
    cin >> T >> S >> q;
    long previous = S;
    int answer = 0;
    while (previous < T) {
        answer++;
        previous *= q;
    }
    cout << answer << endl;
    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    long ryuka[n + 1];
    ryuka[0] = 2;
    ryuka[1] = 1;
    for (int i = 2; i < n + 1; i++) {
        ryuka[i] = ryuka[i - 1] + ryuka[i - 2];
    }
    cout << ryuka[n];
    return 0;
}
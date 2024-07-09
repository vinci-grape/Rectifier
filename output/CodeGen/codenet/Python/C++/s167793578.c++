#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a = n * (n - 1) / 2;
    int b = m * (m - 1) / 2;
    cout << a + b << endl;
    return 0;
}
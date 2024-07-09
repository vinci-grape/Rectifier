#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x[3] = {a + b, a - b, a * b};
    cout << max(x) << endl;
    return 0;
}
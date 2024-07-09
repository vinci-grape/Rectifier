#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << max(0, a-2*b) << endl;

    return 0;
}
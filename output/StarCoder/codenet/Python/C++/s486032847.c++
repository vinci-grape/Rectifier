#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    string N;
    cin >> N;
    int n = 0;
    for (int i = 0; i < N.size(); i++) {
        n += (int)(N[i] - '0');
    }
    if (n % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
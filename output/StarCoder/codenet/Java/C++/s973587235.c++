#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    int n;
    cin >> n;
    int minN = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        int h;
        cin >> h;
        if (minN == h) {
            minN = h;
        } else if (minN == h - 1) {
            minN = h - 1;
        } else if (minN < h - 1) {
            minN = h - 1;
        } else if (minN > h) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
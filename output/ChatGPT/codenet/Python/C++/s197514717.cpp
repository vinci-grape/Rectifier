#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> ABC(3);
    for (int i = 0; i < 3; i++) {
        cin >> ABC[i];
    }

    int A = ABC[0];
    int B = ABC[1];
    int C = ABC[2];

    cout << max({ 10*A+B+C , 10*B+C+A , 10*C+A+B }) << endl;

    return 0;
}
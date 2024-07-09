#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> x;

    // A + B
    x.push_back(a + b);
    // A - B
    x.push_back(a - b);
    // A * B
    x.push_back(a * b);

    cout << *max_element(x.begin(), x.end()) << endl;


    return 0;
}
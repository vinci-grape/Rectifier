#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> candy;
    int temp;
    for (int i = 0; i < 3; i++) {
        cin >> temp;
        candy.push_back(temp);
    }
    sort(candy.begin(), candy.end());
    cout << (candy[0] + candy[1] == candy[2] ? "Yes" : "No") << endl;

    return 0;
}
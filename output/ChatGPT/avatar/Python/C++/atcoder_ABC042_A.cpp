#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ABC(3);
    cin >> ABC[0] >> ABC[1] >> ABC[2];

    if (count(ABC.begin(), ABC.end(), 5) == 2) {
        if (accumulate(ABC.begin(), ABC.end(), 0) == 17) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
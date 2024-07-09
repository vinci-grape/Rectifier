#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> arr(t);
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    int prevWinner = 0;
    for (int i = 0; i < t; i++) {
        if (arr[i] == 1) {
            if (prevWinner == 0) {
                prevWinner = 2;
            }
        }
        if (prevWinner == 2 || prevWinner == 0) {
            if ((arr[i] - 1) % 2 == 0) {
                cout << 2 << endl;
                prevWinner = 2;
            } else {
                cout << 1 << endl;
                prevWinner = 1;
            }
        } else {
            if ((arr[i] - 1) % 2 == 0) {
                cout << 1 << endl;
                prevWinner = 1;
            } else {
                cout << 2 << endl;
                prevWinner = 2;
            }
        }
    }
    return 0;
}
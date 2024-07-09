#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; i++) {
        vector<int> l1;
        for (int j = 0; j < 3; j++) {
            int num;
            cin >> num;
            l1.push_back(num);
        }
        if (l1[0] + l1[1] + l1[2] > 1) {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}
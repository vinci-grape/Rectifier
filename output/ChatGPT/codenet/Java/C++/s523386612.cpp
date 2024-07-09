#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int count[t + 1] = {0};
    for (int i = 2; i < t + 1; i++) {
        int num;
        cin >> num;
        count[num]++;
    }
    for (int i = 1; i < t + 1; i++) {
        cout << count[i] << endl;
    }
}
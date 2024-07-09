#include <iostream>
using namespace std;

int main() {
    int h, a;
    cin >> h >> a;
    int num = 0;
    for (int i = 1; h > 0; i++) {
        h = h - a;
        num++;
    }
    cout << num << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int cookies[3];
    cin >> cookies[0] >> cookies[1] >> cookies[2];
    int leftOver = cookies[0] - cookies[2];
    int takahashi = max(0, leftOver);
    cout << takahashi << " " << (takahashi > 0 ? cookies[1] : max(0, cookies[1] - abs(leftOver)));
    return 0;
}
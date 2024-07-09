#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    bool bool = (x == 1) ? true : false;
    int result = (!bool) ? 1 : 0;
    cout << result << endl;
    return 0;
}
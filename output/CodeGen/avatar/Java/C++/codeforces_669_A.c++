#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n / 3) * 2 + (n % 3 == 0? 0 : 1) << endl;
    return 0;
}
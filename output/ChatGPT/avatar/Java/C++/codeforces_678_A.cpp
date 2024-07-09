#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    n++;
    int z = 0;
    if (n % k != 0)
        z = k - n % k;
    cout << n + z << endl;
    
    return 0;
}
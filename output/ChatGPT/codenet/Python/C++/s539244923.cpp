#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    cout << (k % n == 0 ? n + k : k - n) << endl;
    
    return 0;
}
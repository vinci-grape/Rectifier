#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if((n / 10) % 111 == 0) {
        cout << "Yes" << endl;
    } else if((n % 1000) % 111 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
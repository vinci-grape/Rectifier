#include <iostream>
using namespace std;

int main() {
    int N, R;
    cin >> N >> R;
    
    if (N >= 10) {
        cout << R << endl;
    } else {
        cout << R + 100 * (10 - N) << endl;
    }
    
    return 0;
}
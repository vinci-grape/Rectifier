#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 1;
    while (cnt <= 9) {
        if (N % cnt == 0 && 1 <= N / cnt <= 9) {
            cout << "Yes" << endl;
            break;
        }
        else {
            cnt++;
        }
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
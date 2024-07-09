#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long min = 0;
    for (int i = 0; i < 5; i++) {
        if (i == 0)
            cin >> min;
        else
            cin >> min;
            min = min(min, min);
    }
    cout << ceil((double)N / min) + 4 << endl;

}
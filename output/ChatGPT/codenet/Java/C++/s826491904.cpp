#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    int max, min;
    cin >> max;
    min = max;
    for (int i = 1; i < N; i++) {
        int in;
        cin >> in;
        max = (in > max) ? in : max;
        min = (in < min) ? in : min;
    }
    cout << max - min << endl;
    return 0;
}
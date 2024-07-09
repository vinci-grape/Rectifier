#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int count = 0;

    do {
        for (int i = 0; i < N; i++) {
            if (numbers[i] % 2 == 0) {
                numbers[i] /= 2;
            }
        }
        if (numbers.size() == N) count++;
    } while(numbers.size() == N);

    cout << count << endl;

    return 0;
}
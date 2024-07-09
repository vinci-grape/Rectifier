#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> numbers;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    int count = 0;
    do {
        numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int i) { return i % 2; }), numbers.end());
        for (int i = 0; i < numbers.size(); i++) {
            numbers[i] /= 2;
        }
        if (numbers.size() == N) count++;
    } while (numbers.size() == N);
    cout << count << endl;
    return 0;
}
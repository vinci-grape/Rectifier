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
        numbers = numbers.stream()
               .filter(i -> (i % 2) == 0)
               .map(i -> i / 2)
               .collect(Collectors.toList());
        if (numbers.size() == N) count++;
    } while(numbers.size() == N);
    cout << count << endl;
    return 0;
}
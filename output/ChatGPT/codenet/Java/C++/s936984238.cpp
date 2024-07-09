#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int number;
    cin >> number;
    while (number != 0) {
        int* score = new int[number];
        for (int i = 0; i < number; i++) {
            cin >> score[i];
        }
        sort(score, score + number);
        int sum = 0;
        for (int i = 1; i < number - 1; i++) {
            sum = sum + score[i];
        }
        cout << sum / (number - 2) << endl;

        cin >> number;
    }
    return 0;
}
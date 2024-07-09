#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <int> input_array(n);
    for (int i = 0; i < n; i++) {
        int S, R, H, C;
        cin >> S >> R >> H >> C;
        input_array[i] = {S, R, H, C};
    }
    vector <int> outdated(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (input_array[i][0] < input_array[j][0] && input_array[i][1] < input_array[j][1] && input_array[i][2] < input_array[j][2]) {
                outdated[i] = 1;
            }
        }
    }
    int minimum_cost = 100000;
    int input_number = 0;
    for (int i = 0; i < n; i++) {
        if (outdated[i] == 0 && input_array[i][3] < minimum_cost) {
            minimum_cost = input_array[i][3];
            input_number = i + 1;
        }
    }
    cout << input_number << endl;
    return 0;
}
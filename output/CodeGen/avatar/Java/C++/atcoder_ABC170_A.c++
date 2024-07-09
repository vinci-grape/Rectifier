#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_array[1];
    cin >> input_array[0];
    int result = 0;
    for (int i = 0; i < input_array[0].length(); i++) {
        if (input_array[0][i] == '0') break;
        result++;
    }
    cout << result << endl;
    return 0;
}
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    istringstream iss(input);
    vector<string> input_array;
    string temp;
    while (iss >> temp) {
        input_array.push_back(temp);
    }

    int result = 0;
    for (string str : input_array) {
        result += 1;
        if (str == "0") {
            break;
        }
    }

    cout << result << endl;

    return 0;
}
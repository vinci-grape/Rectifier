#include <iostream>
using namespace std;

int main() {
    try {
        string input;
        getline(cin, input);
        int a = stoi(input.substr(0, input.find(" ")));
        int b = stoi(input.substr(input.find(" ")+1));
        int c = a - b * 2;
        if (c < 0) c = 0;
        cout << c << endl;
    } catch (exception& e) {
    }
}
#include <iostream>
#include <string>
using namespace std;

string generateString() {
    string str;
    for (int i = 1; i <= 1000; i++) {
        str += to_string(i);
    }
    return str;
}

int main() {
    int n;
    cin >> n;
    cout << generateString()[n - 1] << endl;
}
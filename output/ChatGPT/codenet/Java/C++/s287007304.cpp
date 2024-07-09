#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    int a = stoi(line.substr(0, line.find(" ")));
    int b = stoi(line.substr(line.find(" ") + 1));
    
    if (b % a == 0) {
        cout << a + b << endl;
    } else {
        cout << b - a << endl;
    }
    
    return 0;
}
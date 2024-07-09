#include <iostream>
#include <string>
using namespace std;

int main() {
    string c;
    cin >> c;
    char letter = c.at(0);
    letter++;
    cout << letter << endl;
    return 0;
}
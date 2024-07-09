#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    string list[3];
    int x = 0;
    int a = 0;
    int y = 0;
    for (int i = 0; i < 3; ++i) {
        list[i] = line.substr(i, line.find(" ", i) - i);
    }
    x = stoi(list[0]);
    a = stoi(list[1]);
    y = stoi(list[2]);
    string h = "NO";
    if (x == 5 || x == 7 || a == 5 || a == 7 || y == 5 || y == 7) {
        if (x + y + a == 17) {
            h = "YES";
        }
    }
    cout << h << endl;
    return 0;
}
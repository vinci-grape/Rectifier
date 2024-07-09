#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string str[2];
    cin >> str[0] >> str[1];
    int h = stoi(str[0]);
    int a = stoi(str[1]);
    int num = 0;
    for (int i = 1; h > 0; i++) {
        h = h - a;
        num++;
    }
    cout << num << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

char generateString() {
    string sb;
    for (int i = 1; i <= 1000; i++) {
        sb.append(i);
    }
    return sb.c_str();
}

int main() {
    int n;
    cin >> n;
    cout << generateString()[n - 1];
    return 0;
}
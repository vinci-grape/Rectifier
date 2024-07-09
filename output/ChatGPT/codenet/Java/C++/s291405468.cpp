#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << (num1 % 500 <= num2 ? "Yes" : "No") << endl;

}
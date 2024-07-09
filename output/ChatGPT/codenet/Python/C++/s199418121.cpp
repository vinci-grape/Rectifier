#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int numA = stoi(A);
    int numB = stoi(B.replace(".", ""));
    cout << (numA * numB) / 100 << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, str;
    int n;
    cin >> n;
    cin.ignore();
    cin.getline(a, n);
    cin.getline(b, n);
    for (int i = 0; i < n / 2; i++) {
        str = str + a[i];
    }
    if (str == a + a) cout << "Yes";
    else cout << "No";
    return 0;
}
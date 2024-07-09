#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    
    for (int i = 0; i < n; i++)
        cin >> a;
    
    for (int i = 0; i < n - 1; i++)
        cin >> b;
    
    for (int i = 0; i < n - 2; i++)
        cin >> c;
    
    int x = a - b;
    int y = b - c;
    
    cout << x << endl;
    cout << y << endl;
    
}
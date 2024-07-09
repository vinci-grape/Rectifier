#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if ( A == B && B == C && C == A ) cout << "Yes";
    else cout << "No";
    return 0;
}
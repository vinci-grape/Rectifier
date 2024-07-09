#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B;
    string S;
    cin >> A >> B >> S;
    if (S[A] == '-' && S.count('-') == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
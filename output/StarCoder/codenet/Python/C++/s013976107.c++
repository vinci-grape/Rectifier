#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int A, B;
    cin >> A >> B;
    if (S[A] == '-' && S.count('-') == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
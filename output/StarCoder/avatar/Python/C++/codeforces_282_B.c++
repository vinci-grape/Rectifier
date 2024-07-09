#include <iostream>
#include <string>
using namespace std;

int main()
{
    int firstline, total, A, G;
    string memory;
    cin >> firstline;
    total = 0;
    memory = "";
    for (int x = 0; x < firstline; x++)
    {
        cin >> A >> G;
        if (total + A <= 500)
        {
            total += A;
            memory += "A";
        }
        else
        {
            total -= G;
            memory += "G";
        }
    }
    cout << memory;
    return 0;
}
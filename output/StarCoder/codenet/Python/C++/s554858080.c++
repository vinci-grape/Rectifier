#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int num = stoi(input);
    if(num % 4 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
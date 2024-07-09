#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cin >> txt;
    int cu = 0, cl = 0;
    for (int z = 0; z < txt.length(); z++)
    {
        if (islower(txt[z]))
            cl++;
        else
            cu++;
    }
    if (cu > cl)
        cout << txt.upper();
    else
        cout << txt.lower();
    return 0;
}
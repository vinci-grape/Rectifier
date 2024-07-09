#include <iostream>
using namespace std;
int main()
{
    int h, a, sho, am;
    cin >> h >> a;
    sho = h / a;
    am = h % a;
    if (am!= 0)
    {
        sho++;
    }
    cout << sho;
    return 0;
}
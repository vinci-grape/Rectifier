#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int lst[3] = {a + b, a - b, a * b};
    cout << max(lst) << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int lst[3] = {a+b, a-b, a*b};
    cout << *max_element(lst, lst+3);
    return 0;
}
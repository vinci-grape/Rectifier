#include <iostream>
using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    int lst[3] = {A+B,A-B,A*B};
    cout << max(lst) << endl;
    return 0;
}
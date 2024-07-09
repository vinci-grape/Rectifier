#include <iostream>
using namespace std;
int main()
{
    int N, cnt = 1;
    cin >> N;
    while (cnt <= 9)
    {
        if (N % cnt == 0 && 1 <= N / cnt && N / cnt <= 9)
        {
            cout << "Yes" << endl;
            break;
        }
        else
        {
            cnt++;
        }
    }
    if (cnt > 9)
    {
        cout << "No" << endl;
    }
    return 0;
}
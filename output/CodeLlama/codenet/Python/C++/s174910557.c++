#include <iostream>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N;
    cin >> S;

    int ans = 1;
    char tmp = S[0];
    for (int i = 0; i < N; i++)
    {
        if (S[i] != tmp)
        {
            ans++;
            tmp = S[i];
        }
    }

    cout << ans << endl;
}
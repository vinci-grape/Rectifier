#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    for (int i = 0; i < N; i++)
    {
        cout << S[i];
    }
    return 0;
}
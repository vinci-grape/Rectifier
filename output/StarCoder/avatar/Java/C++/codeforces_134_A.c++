#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int c = 0;
    string s;
    for (int i = 0; i < n; i++)
    {
        if ((sum - arr[i]) % (n - 1) == 0 && (sum - arr[i]) / (n - 1) == arr[i])
        {
            c++;
            s += to_string(i + 1) + " ";
        }
    }
    cout << c << endl;
    cout << s << endl;
    return 0;
}
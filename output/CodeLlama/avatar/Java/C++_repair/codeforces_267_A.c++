#include <iostream>
using namespace std;
int sub(int a, int b)
{
    int minVal = min(a, b);
    int maxVal = max(a, b);
    int result = 0;
    while (minVal > 0)
    {
        result += maxVal / minVal;
        maxVal = maxVal % minVal;
        int curr_min = min(minVal, maxVal);
        int curr_max = max(minVal, maxVal);
        minVal = curr_min;
        maxVal = curr_max;
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << sub(a, b) << endl;
    }
    return 0;
}
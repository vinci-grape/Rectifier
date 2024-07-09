#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int a[5];
    map<int, int> dic;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        if (a[i] % 10 == 0)
        {
            dic.insert(pair<int, int>(i, 0));
        }
        else
        {
            dic.insert(pair<int, int>(i, a[i] % 10 - 10));
        }
    }
    int min_num = 0;
    int a_sum = 0;
    for (int i = 0; i < 5; i++)
    {
        a_sum += a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (dic[i] == *min_element(dic.begin(), dic.end()))
        {
            min_num = i;
            break;
        }
    }
    dic.erase(min_num);
    cout << abs(accumulate(dic.begin(), dic.end(), 0)) + a_sum;
    return 0;
}
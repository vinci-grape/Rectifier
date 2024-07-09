#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> q;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        q.push_back(a);
    }
    for (int j = 0; j < q.size(); j++)
    {
        for (int k = 0; k < q.size(); k++)
        {
            if (k == j)
            {
                continue;
            }
            else if (q[j][0] == q[k][q[k].length() - 1])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
    }
    cout << count;
    return 0;
}
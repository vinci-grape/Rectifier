#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num - 1);
    }
    bool no_one = false;
    if (1 not in nums)
    {
        nums = {num / 2 for num in nums};
        no_one = true;
    }
    bool is_odd = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (!parity_of_nCr(n - 1, i) && nums[i] & 1)
        {
            is_odd ^= 1;
        }
    }
    if (!is_odd)
    {
        cout << 0;
    }
    else
    {
        cout << (1 << no_one);
    }
    return 0;
}
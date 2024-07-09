#include <iostream>
using namespace std;
int main()
{
    int sec, per_num;
    double max_sec;
    cin >> sec >> per_num >> max_sec;
    int ans_num = 0;
    for (int i = sec; i < max_sec; i += sec)
    {
        ans_num += per_num;
    }
    cout << ans_num << endl;
}
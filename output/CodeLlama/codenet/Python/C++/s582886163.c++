#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int capacity_list[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> capacity_list[i];
    }
    int bottle_neck = capacity_list[0];
    cout << 4 + (N + bottle_neck - 1) / bottle_neck;
    return 0;
}
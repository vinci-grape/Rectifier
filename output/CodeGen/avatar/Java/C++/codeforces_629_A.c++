#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int counter = 0;
    int fine = 0;
    string arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < num; k++)
        {
            if (arr[k].at(i) == 'C')
            {
                counter++;
            }
        }
        fine += (counter * (counter - 1)) / 2;
        counter = 0;
    }
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < num; k++)
        {
            if (arr[i].at(k) == 'C')
            {
                counter++;
            }
        }
        fine += (counter * (counter - 1)) / 2;
        counter = 0;
    }
    cout << fine;
    return 0;
}
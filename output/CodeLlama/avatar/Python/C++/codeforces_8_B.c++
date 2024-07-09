#include <iostream>
using namespace std;
int main()
{
    string record_of_movements;
    cin >> record_of_movements;
    int x = 0, y = 0;
    int d_movement[4][2] = { { 0 , -1 } , { 0 , 1 } , { 1 , 0 } , { -1 , 0 } };
    bool d[1000][1000];
    bool bug = false;
    for (int i = 0; i < record_of_movements.length(); i++)
    {
        int temp[2] = { x , y };
        x += d_movement[record_of_movements[i] - 'A'][0];
        y += d_movement[record_of_movements[i] - 'A'][1];
        if (d[x][y] == false)
        {
            for (int j = 0; j < 4; j++)
            {
                if ((x + d_movement[j][0] != temp[0] || y + d_movement[j][1] != temp[1]) && d[x + d_movement[j][0]][y + d_movement[j][1]] == true)
                {
                    bug = true;
                    break;
                }
            }
        }
        else
        {
            bug = true;
        }
        if (bug == true)
        {
            break;
        }
        d[x][y] = true;
    }
    if (bug == true)
    {
        cout << "BUG";
    }
    else
    {
        cout << "OK";
    }
    return 0;
}
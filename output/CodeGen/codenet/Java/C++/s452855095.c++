#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int cnt = 0;
    bool flag = true;
    while(true)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                flag = false;
                break;
            }
            else
                arr[i] = arr[i]/2;
        }
        if(flag==true)
            cnt++;
        else
            break;
    }
    cout << cnt << endl;
    return 0;
}
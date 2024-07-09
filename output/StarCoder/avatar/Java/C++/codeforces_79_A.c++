#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y,turn=0;
    cin>>x>>y;
    while(true)
    {
        if(turn%2==0)
        {
            if(x>=2 && y>=2)
            {
                x-=2;
                y-=2;
            }
            else if(x>=1 && y>=12)
            {
                x-=1;
                y-=12;
            }
            else if(x>=0 && y>=22)
            {
                y-=22;
            }
            else
            {
                cout<<"Hanako"<<endl;
                return 0;
            }
        }
        else
        {
            if(x>=0 && y>=22)
            {
                y-=22;
            }
            else if(x>=1 && y>=12)
            {
                x-=1;
                y-=12;
            }
            else if(x>=2 && y>=2)
            {
                x-=2;
                y-=2;
            }
            else
            {
                cout<<"Ciel"<<endl;
                return 0;
            }
        }
        turn++;
    }
}
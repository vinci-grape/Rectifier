#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    while(1)
    {
        int l[10],d,v[2],t;
        for(int i=0;i<10;i++)
        {
            cin>>l[i];
            d+=l[i];
        }
        cin>>v[0]>>v[1];
        t=(double)d/(v[0]+v[1]);
        d=0;
        for(int i=0;i<11;i++)
        {
            if(v[0]*t<=d)
            {
                cout<<i<<endl;
                break;
            }
            else
            {
                d+=l[i];
            }
        }
    }
    return 0;
}
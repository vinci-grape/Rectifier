#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int x=0,y=0,z=0;
        for(int i=0;i<12;i++)
        {
            if(s[i]=='X')
            {
                x++;
            }
            if(s[i]=='Y')
            {
                y++;
            }
            if(s[i]=='Z')
            {
                z++;
            }
        }
        if(x==12)
        {
            cout<<"1 12x1"<<endl;
        }
        else if(y==6)
        {
            cout<<"2 2x6"<<endl;
        }
        else if(z==4)
        {
            cout<<"3 3x4"<<endl;
        }
        else if(x==6)
        {
            cout<<"4 4x3"<<endl;
        }
        else if(y==4)
        {
            cout<<"5 6x2"<<endl;
        }
        else if(x==4)
        {
            cout<<"6 12x1"<<endl;
        }
        else if(x==3)
        {
            cout<<"7 4x3"<<endl;
        }
        else if(y==3)
        {
            cout<<"8 3x4"<<endl;
        }
        else if(z==2)
        {
            cout<<"9 2x6"<<endl;
        }
        else if(x==2)
        {
            cout<<"10 6x2"<<endl;
        }
        else if(y==2)
        {
            cout<<"11 6x2"<<endl;
        }
        else if(z==1)
        {
            cout<<"12 12x1"<<endl;
        }
        else if(x==1)
        {
            cout<<"13 12x1"<<endl;
        }
        else if(y==1)
        {
            cout<<"14 12x1"<<endl;
        }
        else if(z==0)
        {
            cout<<"15 12x1"<<endl;
        }
    }
    return 0;
}
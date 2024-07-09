#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d=0;
    string ans="f";
    if(n%400==0 || (n%4==0 && n%100!=0))
    {
        ans="ly";
    }
    else
    {
        ans="nly";
    }
    while(true)
    {
        if(n%400==0 || (n%4==0 && n%100!=0))
        {
            if(d=='m')
            {
                d='w';
                n++;
            }
            else if(d=='t')
            {
                d='th';
                n++;
            }
            else if(d=='w')
            {
                d='f';
                n++;
            }
            else if(d=='th')
            {
                d='sa';
                n++;
            }
            else if(d=='f')
            {
                d='s';
                n++;
            }
            else if(d=='sa')
            {
                d='m';
                n++;
            }
            else if(d=='s')
            {
                d='t';
                n++;
            }
        }
        else
        {
            if(d=='m')
            {
                d='t';
                n++;
            }
            else if(d=='t')
            {
                d='w';
                n++;
            }
            else if(d=='w')
            {
                d='th';
                n++;
            }
            else if(d=='th')
            {
                d='f';
                n++;
            }
            else if(d=='f')
            {
                d='sa';
                n++;
            }
            else if(d=='sa')
            {
                d='s';
                n++;
            }
            else if(d=='s')
            {
                d='m';
                n++;
            }
        }
        if(d=='f' && ans=="ly" && leapyear(n)=="y")
        {
            break;
        }
        else if(d=='f' && ans=="nly" && leapyear(n)=="n")
        {
            break;
        }
    }
    cout<<n;
}
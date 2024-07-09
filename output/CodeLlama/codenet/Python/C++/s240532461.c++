#include <iostream>
using namespace std;
int main()
{
    int N,L;
    cin>>N>>L;
    int aji[N];
    for(int i=0;i<N;i++)
    {
        aji[i]=L+i-1;
    }
    int min=aji[0];
    int max=aji[0];
    for(int i=0;i<N;i++)
    {
        if(aji[i]<min)
        {
            min=aji[i];
        }
        if(aji[i]>max)
        {
            max=aji[i];
        }
    }
    if(min>=0)
    {
        for(int i=0;i<N;i++)
        {
            if(aji[i]==min)
            {
                aji[i]=0;
            }
        }
    }
    else if(max<=0)
    {
        for(int i=0;i<N;i++)
        {
            if(aji[i]==max)
            {
                aji[i]=0;
            }
        }
    }
    else
    {
        for(int i=0;i<N;i++)
        {
            if(aji[i]==min)
            {
                aji[i]=0;
            }
        }
    }
    int sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=aji[i];
    }
    cout<<sum;
    return 0;
}
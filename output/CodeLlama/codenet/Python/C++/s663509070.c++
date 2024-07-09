#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N,D;
    cin>>N>>D;
    int mat[N][D];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<D;j++)
        {
            cin>>mat[i][j];
        }
    }
    int c=0;
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            int dist=sqrt(pow(mat[i][0]-mat[j][0],2)+pow(mat[i][1]-mat[j][1],2));
            if(dist==(int)dist)
            {
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}
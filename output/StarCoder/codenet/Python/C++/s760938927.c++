#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w,ka;
    cin>>h>>w>>ka;
    string mat[h];
    for(int i=0;i<h;i++)
    {
        cin>>mat[i];
    }
    int ans=0;
    for(int i=0;i<(1<<h+w);i++)
    {
        string rs=bitset<100>(i).to_string().substr(0,h);
        string cs=bitset<100>(i).to_string().substr(h,w);
        int ct=0;
        for(int l=0;l<h;l++)
        {
            for(int k=0;k<w;k++)
            {
                if(mat[l][k]=='#' && rs[l]=='0' && cs[k]=='0')
                {
                    ct++;
                }
            }
        }
        if(ct==ka)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
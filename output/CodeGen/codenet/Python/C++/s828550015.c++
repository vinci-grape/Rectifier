#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x,y,a,b,c;
    cin >> x >> y >> a >> b >> c;
    int p[x],q[y],r[c];
    for(int i = 0; i < x; i++)
        cin >> p[i];
    for(int i = 0; i < y; i++)
        cin >> q[i];
    for(int i = 0; i < c; i++)
        cin >> r[i];
    sort(p,p+x,greater<int>());
    sort(q,q+y,greater<int>());
    sort(r,r+c,greater<int>());
    int pq[x+y],pq_len = 0;
    for(int i = 0; i < x+y; i++)
    {
        if(pq_len < x && p[pq_len] <= r[i])
            pq[pq_len++] = r[i];
        else if(pq_len < x && q[pq_len] <= r[i])
            pq[pq_len++] = q[pq_len];
        else if(pq_len < x && p[pq_len] <= q[pq_len])
            pq[pq_len++] = p[pq_len];
        else if(pq_len < x && q[pq_len] <= q[pq_len])
            pq[pq_len++] = q[pq_len];
        else if(pq_len < x && p[pq_len] <= r[i])
            pq[pq_len++] = r[i];
        else if(pq_len < x && q[pq_len] <= r[i])
            pq[pq_len++] = q[pq_len];
        else if(pq_len < x && p[pq_len] <= q[pq_len])
            pq[pq_len++] = p[pq_len];
        else if(pq_len < x && q[pq_len] <= q[pq_len])
            pq[pq_len++] = q[pq_len];
        else if(pq_len < x && p[pq_len] <= r[i])
            pq[pq_len++] = r[i];
        else if(pq_len < x && q[pq_len] <= r[i])
            pq[pq_len++] = q[pq_len];
        else if(pq_len < x && p[pq_len] <= q[pq_len])
            pq[pq_len++] = p[pq_len];
        else if(pq_len < x && q[pq_len] <= q[pq_len])
            pq[pq_len++] = q[pq_len];
        else if(pq_len < x && p[pq_len] <= r[i])
            pq[pq_len++] = r[i];
        else if(pq_len < x && q[pq_len] <= r[i])
            pq[pq_len++] = q[pq_len];
        else if(pq_len < x && p[pq_len] <= q[pq_len])
            pq[pq_len++] = p[pq_len];
        else if(pq_len < x && q[pq_len] <= q[pq_len])
            pq[pq_len++] = q[pq_len];
    }
    cout << pq_len << endl;
    for(int i = 0; i < pq_len; i++)
        cout << pq[i] << " ";
    cout << endl;
    return 0;
}
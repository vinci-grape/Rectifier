#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n), s(n);
    for(int i=0;i<n;i++)
        cin >> p[i] >> s[i];
    int pScore = 0, sScore = 0, pMaxScore = 0, sMaxScore = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A')
        {
            pScore += p[i];
            if(pScore > pMaxScore)
                pMaxScore = pScore;
        }
        else
        {
            pScore -= p[i];
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i] == 'A')
        {
            sScore += s[i];
            if(sScore > sMaxScore)
                sMaxScore = sScore;
        }
        else
        {
            sScore -= s[i];
        }
    }
    if(pMaxScore > sMaxScore)
        cout << pMaxScore;
    else
        cout << sMaxScore;
    return 0;
}
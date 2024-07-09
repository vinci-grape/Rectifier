#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int p[2] = {a, b};
    int q[2] = {c, d};
    int vec[2] = {0, 0};
    for (int i = 0; i < 2; i++)
    {
        vec[i] = p[i] - q[i];
    }
    int tmp = 0;
    tmp = vec[0];
    vec[0] = vec[1];
    vec[1] = -tmp;
    int newpos[2] = {0, 0};
    for (int i = 0; i < 2; i++)
    {
        newpos[i] = q[i] + vec[i];
    }
    if (p == revpos(q, newpos))
    {
        cout << "OK" << endl;
    }
    cout << newpos[0] << endl;
    cout << newpos[1] << endl;
    return 0;
}
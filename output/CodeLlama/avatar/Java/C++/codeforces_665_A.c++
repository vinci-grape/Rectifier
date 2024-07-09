#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, tA, b, tB, hrs, mins, simDeparture, simArrival, counter;
    cin >> a >> tA >> b >> tB;
    cin >> hrs >> mins;
    simDeparture = hrs * 60 + mins;
    simArrival = simDeparture + tA;
    for (int i = 300; i < 1440; i += b)
    {
        int busDeparture = i;
        int busArrival = i + tB;
        if (busDeparture >= simArrival || simDeparture >= busArrival)
            continue;
        counter++;
    }
    cout << counter << endl;
    return 0;
}
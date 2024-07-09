#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, tA, b, tB, hrs, mins, simDeparture, simArrival, counter;
    string timing;
    cin >> a >> tA >> b >> tB >> timing;
    hrs = stoi(timing.substr(0, 2));
    mins = stoi(timing.substr(3));
    simDeparture = hrs * 60 + mins;
    simArrival = simDeparture + tA;
    counter = 0;
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
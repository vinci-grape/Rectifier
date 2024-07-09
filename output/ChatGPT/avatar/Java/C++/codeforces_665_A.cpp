#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, tA, b, tB;
    cin >> a >> tA >> b >> tB;

    string timing;
    cin >> timing;
    int hrs = stoi(timing.substr(0, 2));
    int mins = stoi(timing.substr(3));
    int simDeparture = hrs * 60 + mins;
    int simArrival = simDeparture + tA;
    int counter = 0;

    for (int i = 300; i < 1440; i += b) {
        int busDeparture = i;
        int busArrival = i + tB;
        if (busDeparture >= simArrival || simDeparture >= busArrival)
            continue;
        counter++;
    }

    cout << counter << endl;

    return 0;
}
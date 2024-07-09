#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    if (S == "Sunny") cout << "Cloudy" << endl;
    
    if (S == "Cloudy") cout << "Rainy" << endl;
    
    if (S == "Rainy") cout << "Sunny" << endl;
    
    return 0;
}
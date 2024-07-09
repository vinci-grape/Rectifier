#include <iostream>
#include <string>
using namespace std;

int main ( )
{
    int firstline;
    int total;
    int memory[500];
    for ( int x = 0 ; x < 500 ; x++ )
    {
        memory[x] = 'A';
    }
    cin >> firstline;
    for ( int x = 0 ; x < firstline ; x++ )
    {
        int A, G;
        cin >> A >> G;
        if ( total + A <= 500 )
        {
            total += A;
            memory[total - A] = 'A';
        }
        else
        {
            total -= G;
            memory[total - G] = 'G';
        }
    }
    for ( int i = 0 ; i < 500 ; i++) {
        cout << memory[i];
    }
    return 0;
}
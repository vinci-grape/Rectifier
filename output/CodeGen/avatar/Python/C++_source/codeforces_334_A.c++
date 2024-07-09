#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    int i, j;
    i = 1;
    j = n * n;
    while ( i < j ) {
        cout << i << " " << j << endl;
        i++;
        j--;
    }
    return 0;
}
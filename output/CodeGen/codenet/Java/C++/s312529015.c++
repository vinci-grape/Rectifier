#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int A, B;
    cout << "Enter two integers: ";
    cin >> A >> B;
    if(A%3==0||B%3==0||(A+B)%3==0){
        cout << "Possible" << endl;
    }else{
        cout << "Impossible" << endl;
    }
    return 0;
}
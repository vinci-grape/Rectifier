#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int y;
    cin >> y;
    bool leap = check_leap(y);
    int sum = 0;
    int mod = 0;
    for(int i = y + 1; ; i++){
        if(check_leap(i)){
            sum += 366;
        }
        else{
            sum += 365;
        }
        if(sum % 7 == 0){
            if((check_leap(i) && leap) || (!check_leap(i) &&!leap)){
                cout << i << endl;
                return 0;
            }
            else{
                continue;
            }
        }
    }
}

bool check_leap(int y){
    return y % 400 == 0 || (y % 4 == 0 && y % 100!= 0);
}
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[3];
    for(int i=0;i<n;i++){
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        if(pow(a[2],2)==pow(a[0],2)+pow(a[1],2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
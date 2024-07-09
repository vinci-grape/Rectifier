#include <bits/stdc++.h>
using namespace std;

class Main
{
public:
    int max = 0,cur = 0;
    //actual logic
    void solve(){
        int a = ni();
        int b = ni();

        cout << max(0, a-2*b) << endl;
    }

//constructor
    Main(){
        try{  
            cin >> noskipws;
            cin.tie(0);
        }catch(exception e){
            cout << e.what() << endl;
        }
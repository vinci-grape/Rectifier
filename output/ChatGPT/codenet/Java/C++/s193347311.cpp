#include <iostream>
#include <string>
using namespace std;

int main() {
    int intLoop;
    cin >> intLoop;
    string strTaro = "";
    string strHana = "";
    int intTaro = 0;
    int intHana = 0;

    for(int i = 0; i < intLoop; i++){
        cin >> strTaro >> strHana;
        int intJudge = strTaro.compare(strHana);
        if(intJudge < 0){
            intHana += 3;
        }else if(intJudge == 0){
            intTaro++;
            intHana++;
        }else if(0 < intJudge){
            intTaro += 3;
        }
    }
    cout << intTaro << " " << intHana << endl;

    return 0;
}
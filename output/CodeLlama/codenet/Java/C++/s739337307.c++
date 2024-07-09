#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    map<int, int> map;

    int countAc = 0;
    int countWaAll = 0;

    for(int i = 0; i < m; i++){
        int question;
        string waOrAc;
        cin >> question >> waOrAc;

        if(map.find(question) == map.end()){
            if(waOrAc == "WA") map[question] = 1;
            else{
                map[question] = -1;
                countAc++;
            }
        }else{
            int countWa = map[question];
            if(countWa < 0);
            else{
                if(waOrAc == "WA") map[question] = countWa + 1;
                else{
                    map[question] = -countWa;
                    countAc++;
                    countWaAll += countWa;
                }
            }
        }
    }

    cout << countAc << " " << countWaAll << endl;

    return 0;
}
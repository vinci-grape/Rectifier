#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <queue>
#include <deque>
#include <stack>
#include <sstream>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <climits>
#include <bitset>
#include <numeric>
#include <array>
#include <tuple>
#include <utility>
#include <functional>
#include <locale>
#define     all(v)            v.begin(),v.end()
#define     mp                     make_pair
#define     pb                     push_back
typedef   long long int               ll ;
using namespace std ;

int main() {
    int mapNum;//Buttle Town図の数
    int h;//地図の大きさの縦
    int w;//地図の大きさの横
    char[][] battleTown;//Buttle Town地図取込用
    int bomberActNum;//指示された戦車の行動数
    char [] bomberAct;//指示された戦車の行動
//    static char [] tankDirection={'^','v','<','>'};//戦車の方向
//    static char [] tankAct={'U','D','L','R','S'};//戦車の行動方向と砲弾発射
    int []tank = new int [2];
    int xOfTank;
    int yOfTank;
    int xOfBomber;
    int yOfBomber;    
    int s;//表示用
    int k;//表示用
    int a;//x Of Bomber
    int b;//y Of Bomber
    int x;//tankの位置x
    int y;//tankの位置y
    
    cin >> mapNum;

    for(int i = 0;i < mapNum; i++){
        if(1<=i && i< mapNum){
            cout << endl;
        }
        cin >> h >> w;

        battleTown = new char[h][w];


        for(int j=0; j<h; j++){
            char[] c = cin.next().toCharArray();
            for(int k=0; k<w; k++){
                battleTown[j][k] = c[k];
//                    System.out.print(battleTown[j][k]);

                if('^'==battleTown[j][k]
                ||'v'==battleTown[j][k]
                ||'<'==battleTown[j][k]
                ||'>'==battleTown[j][k]){
                    //x.yがTankの位置ということで。
                    x = j;
                    y = k; 
                    
                }

            } 

        }
//                  System.out.println("tank x は" + x);
//                  System.out.println("tank y は" + y);
        cin >> bomberActNum;
        cin >> bomberAct;

        if(0 <= x && x <= h && 0<= y && y <= w){ 
            for(int l=0; l<bomberActNum; l++){
                
                if(bomberAct[l] == 'U'){
//検証用
//System.out.print(bomberAct[l] + "です。");                 
                    battleTown[x][y] ='^';
                        if(x-1 >=0 && battleTown[x-1][y]=='.'){
    
//System.out.print( "[" + x + "-1][" + y + "]が平地なので進みます");                                           
                            battleTown[x-1][y] ='^';
                            battleTown[x][y
#include <iostream>
#include <cstdlib>
using namespace std;

class calArea{
    int Area(int w, int h ){
        int area = w * h;
        return area;
    }
};

int main(){
    calArea ab = new calArea();
    int area1 = ab.Area(atoi(argv[1]),atoi(argv[2]));
    int area2 = ab.Area(atoi(argv[3]),atoi(argv[4]));
    if(area1 > area2){
        cout << area1;
    }else if(area1 < area2){
        cout << area2;
    }else if(area1 == area2){
        cout << area1;
    }
    return 0;
}
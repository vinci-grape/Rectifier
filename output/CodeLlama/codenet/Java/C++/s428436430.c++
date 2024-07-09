#include <iostream>
#include <vector>

using namespace std;

class calArea{
    public:
    int Area(int w, int h ){
        int area = w * h;
        return area;
    }
};

int main() {
    vector<int> arr;
    int w,h;
    for(int i = 0; i < 4;i++){
        cin>>w;
        arr.push_back(w);
    }
    
    calArea ab;
    int area1 = ab.Area(arr[0],arr[1]);
    int area2 = ab.Area(arr[2],arr[3]);
    
    if(area1 > area2){
        cout<<area1;
    }else if(area1 < area2){
        cout<<area2;
    }else if(area1 == area2){
        cout<<area1;
    }   
    
    return 0;
}
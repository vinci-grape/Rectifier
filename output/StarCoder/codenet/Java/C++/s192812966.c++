#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    int w,h,n;
    cin>>w>>h>>n;
    int x[n],y[n],a[n];
    int xmax = w,xmin = 0;
    int ymax = h,ymin = 0;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>a[i];
        switch(a[i]){

        case 1:
            xmin = max(xmin, x[i]);
            break;
        case 2:
            xmax = min(xmax, x[i]);
            break;
        case 3:
            ymin = max(ymin, y[i]);
            break;
        case 4:
            ymax = min(ymax, y[i]);
            break;
        }
    }
    w = max(xmax-xmin, 0);
    h = max(ymax-ymin, 0);

    cout<<w*h<<endl;
}
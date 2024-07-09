#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct IntegralRect{
	int height;
	int width;
	IntegralRect(int h, int w){
		height = h;
		width = w;
	}

	int diagonal(){
		if(height >= width){
			return INT_MAX;
		}
		return height*height + width*width;
	}
};

bool cmp(IntegralRect a, IntegralRect b){
	int d1 = a.diagonal();
	int d2 = b.diagonal();
	return d1 == d2 ? a.height < b.height : d1 < d2;
}

int main(){
	vector<IntegralRect> rects;
	for(int i = 1; i <= 200; i++){
		for(int j = 1; j <= 200; j++){
			rects.push_back(IntegralRect(i, j));
		}
	}
	sort(rects.begin(), rects.end(), cmp);

	while(true){
		int h, w;
		cin >> h >> w;
		if(h == 0 && w == 0){
			break;
		}
		IntegralRect tmpRect(h, w);
		int diag = tmpRect.diagonal();
		for(int i = 0; i < rects.size(); i++){
			if(rects[i].diagonal() > diag){
				cout << rects[i].height << " " << rects[i].width << endl;
				break;
			}
		}
	}
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int number;
	while(cin >> number){
		if(number == 0)
			break;
		int score[number];
		for(int i = 0; i < number; i++){
			cin >> score[i];
		}
		sort(score, score+number);
		int sum = 0;
		for(int i = 1; i < number-1; i++){
			sum += score[i];
		}
		cout << sum/(number-2) << endl;
	}
	return 0;
}
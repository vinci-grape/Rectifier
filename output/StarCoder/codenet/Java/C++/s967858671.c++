#include <iostream>
using namespace std;
int main()
{
	int Num[11];
	for (int i = 0; i < 10;i++){
		cin>>Num[i];
	}
	for (int a = 9; a >= 0; a--){
		for (int b = 0; b < a; b++){
				if (Num[b] < Num[b+1]){
						int temp = Num[b];
						Num[b] = Num[b+1];
						Num[b+1] = temp;
				}
		}
		}
	cout<<Num[0]<<endl;
	cout<<Num[1]<<endl;
	cout<<Num[2]<<endl;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
	int intLoop;
	string strTaro;
	string strHana;
	int intTaro = 0;
	int intHana = 0;
	cin >> intLoop;
	for(int i = 0; i < intLoop; i++){
		cin >> strTaro;
		cin >> strHana;
		if(strTaro < strHana){
			intHana += 3;
		}else if(strTaro == strHana){
			intTaro++;
			intHana++;
		}else if(strTaro > strHana){
			intTaro += 3;
		}
	}
	cout << intTaro << " " << intHana << endl;
	return 0;
}
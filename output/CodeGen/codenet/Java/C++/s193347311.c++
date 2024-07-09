#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	int intLoop;
	cin >> intLoop;
	string strTaro, strHana;
	int intTaro, intHana;
	for (int i = 0; i < intLoop; i++) {
		cin >> strTaro >> strHana;
		int intJudge = strTaro.compare(strHana);
		if (intJudge < 0) {
			intHana += 3;
		} else if (intJudge == 0) {
			intTaro++;
			intHana++;
		} else if (0 < intJudge) {
			intTaro += 3;
		}
	}
	cout << intTaro << " " << intHana << endl;
	return 0;
}
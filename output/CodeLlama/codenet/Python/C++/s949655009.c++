#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string strn;
	cin >> strn;
	int n = stoi(strn);
	vector<string> shichigolist = {"3","5","7"};
	vector<vector<string>> shichigo(strn.size());
	for(int i = 0; i < strn.size(); i++) {
		if(i == 0) {
			for(int j = 0; j < shichigolist.size(); j++) {
				shichigo[i].push_back(shichigolist[j]);
			}
		} else {
			for(int j = 0; j < shichigo[i-1].size(); j++) {
				for(int k = 0; k < shichigolist.size(); k++) {
					shichigo[i].push_back(shichigo[i-1][j] + shichigolist[k]);
				}
			}
		}
	}
	int target = strn.size() - 1;
	for(int i = 0; i < strn.size(); i++) {
		for(int j = 0; j < shichigo[i].size(); j++) {
			if(i == target) {
				if(stoi(shichigo[i][j]) > n) {
					shichigo[target].erase(shichigo[target].begin() + j);
				} else if(shichigo[i][j].find("3") == string::npos || shichigo[i][j].find("5") == string::npos || shichigo[i][j].find("7") == string::npos) {
					shichigo[target].erase(shichigo[target].begin() + j);
				}
			} else {
				if(shichigo[i][j].find("3") == string::npos || shichigo[i][j].find("5") == string::npos || shichigo[i][j].find("7") == string::npos) {
					shichigo[i].erase(shichigo[i].begin() + j);
				}
			}
		}
	}
	cout << shichigo[target].size() << endl;
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string strn;
	cin >> strn;
	int n = stoi(strn);
	vector<string> shichigolist = {"3","5","7"};
	vector<vector<string>> shichigo(strn.size(), vector<string>());
	for (int i = 0; i < strn.size(); i++) {
		if (i == 0) {
			for (string j : shichigolist) {
				shichigo[i].push_back(j);
			}
		} else {
			for (string j : shichigo[i-1]) {
				for (string k : shichigolist) {
					shichigo[i].push_back(j+k);
				}
			}
		}
	}
	int target = strn.size()-1;
	for (int i = 0; i < strn.size(); i++) {
		for (string j : shichigo[i]) {
			if (i == target) {
				if (stoi(j) > n) {
					shichigo[target].erase(remove(shichigo[target].begin(), shichigo[target].end(), j), shichigo[target].end());
				} else if (j.find("3") == string::npos || j.find("5") == string::npos || j.find("7") == string::npos) {
					shichigo[target].erase(remove(shichigo[target].begin(), shichigo[target].end(), j), shichigo[target].end());
				}
			} else {
				if (j.find("3") == string::npos || j.find("5") == string::npos || j.find("7") == string::npos) {
					shichigo[i].erase(remove(shichigo[i].begin(), shichigo[i].end(), j), shichigo[i].end());
				}
			}
		}
	}
	cout << accumulate(shichigo.begin(), shichigo.end(), 0, [](int a, vector<string> b) {return a + b.size();});
	return 0;
}
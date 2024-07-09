#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
	int size;
	cin >> size;
	vector<vector<int> > graph(size, vector<int>(size));
	int id, cols;
	int row[size];
	for(int i = 0; i < size; i++) {
		cin >> id;
		cin >> cols;
		for(int j = 0; j < cols; j++)
			cin >> row[scan.nextInt() - 1] = 1;
		graph[id - 1] = row;
	}
	
	for(int i = 0; i < graph.size(); i++) {
		for(int j = 0; j < graph[i].size(); j++){
			cout << graph[i][j];
			if(j < graph[i].size() - 1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
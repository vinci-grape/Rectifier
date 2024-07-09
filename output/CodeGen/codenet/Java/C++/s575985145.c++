#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	int size;
	cin >> size;
	int **graph = new int*[size];
	for(int i = 0; i < size; i++) {
		graph[i] = new int[size];
	}
	
	int id;
	int cols;
	int *row;
	for(int i = 0; i < size; i++) {
		cin >> id;
		cin >> cols;
		row = new int[cols];
		for(int j = 0; j < cols; j++) {
			cin >> row[j];
		}
		graph[id - 1] = row;
	}
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			cout << graph[i][j];
			if(j < size - 1)
				cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}
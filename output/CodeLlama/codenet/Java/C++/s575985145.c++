#include <iostream>
using namespace std;

int main() {
	int size;
	cin >> size;
	int graph[size][size];
	
	int id, cols;
	int row[size];
	for(int i = 0; i < size; i++) {
		cin >> id >> cols;
		for(int j = 0; j < cols; j++)
			cin >> row[j];
		graph[id - 1] = row;
	}
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++)
			cout << graph[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}
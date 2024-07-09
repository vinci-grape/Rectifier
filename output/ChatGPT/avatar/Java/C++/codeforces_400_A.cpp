#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isSolution(int columnsCount, string x) {
    vector<bool> allXs(columnsCount, true);
    
    for (int i = 0; i < 12; i++) {
        if (x[i] != 'X') {
            allXs[i % columnsCount] = false;
        }
    }
    
    for (int i = 0; i < columnsCount; i++) {
        if (allXs[i]) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int possibleSolutions = 0;
        string s;
        cin >> s;
        string solutions = "";
        
        if (isSolution(12, s)) {
            solutions += " 1x12";
            possibleSolutions++;
        }
        
        if (isSolution(6, s)) {
            solutions += " 2x6";
            possibleSolutions++;
        }
        
        if (isSolution(4, s)) {
            solutions += " 3x4";
            possibleSolutions++;
        }
        
        if (isSolution(3, s)) {
            solutions += " 4x3";
            possibleSolutions++;
        }
        
        if (isSolution(2, s)) {
            solutions += " 6x2";
            possibleSolutions++;
        }
        
        if (isSolution(1, s)) {
            solutions += " 12x1";
            possibleSolutions++;
        }
        
        cout << possibleSolutions << solutions << endl;
    }
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Calculator {
private:
    int k;
    int answer;
    bool isCalculate;
    vector<vector<int>> lists;
    
public:
    Calculator(int n, int k, vector<int>& as) {
        this->k = k;
        this->answer = 0;
        this->isCalculate = false;
        this->lists.resize(n);
        
        for (int i = 0; i < n; i++) {
            if (as[i] > 0) {
                this->lists[as[i]].push_back(i);
            } else {
                this->answer++;
            }
        }
    }
    
    int calculate() {
        if (!this->isCalculate) {
            this->dfs(0, 0);
            this->isCalculate = true;
        }
        return this->answer;
    }
    
private:
    int dfs(int a, int pre) {
        int h = 0;
        for (int i : this->lists[a]) {
            h = max(h, this->dfs(i, a));
        }
        
        if (pre > 0 && h == this->k - 1) {
            h = 0;
            this->answer++;
        } else {
            h++;
        }
        return h;
    }
};

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> as(n);
    for (int i = 0; i < n; i++) {
        cin >> as[i];
        as[i]--;
    }
    
    Calculator calc(n, k, as);
    cout << calc.calculate() << endl;
    
    return 0;
}
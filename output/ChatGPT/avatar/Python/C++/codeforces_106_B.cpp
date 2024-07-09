#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, int, int>> input_array;
    
    for (int i = 0; i < n; i++) {
        int S, R, H, C;
        cin >> S >> R >> H >> C;
        input_array.push_back(make_tuple(S, R, H, C));
    }
    
    vector<tuple<int, int, int, int>> outdated;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (get<0>(input_array[i]) < get<0>(input_array[j]) && get<1>(input_array[i]) < get<1>(input_array[j]) && get<2>(input_array[i]) < get<2>(input_array[j])) {
                outdated.push_back(input_array[i]);
            }
        }
    }
    
    sort(outdated.begin(), outdated.end());
    outdated.erase(unique(outdated.begin(), outdated.end()), outdated.end());
    
    int minimum_cost = 100000;
    int input_number = 0;
    
    for (int i = 0; i < n; i++) {
        tuple<int, int, int, int> current_item = input_array[i];
        int cost = get<3>(current_item);
        
        if (find(outdated.begin(), outdated.end(), current_item) == outdated.end() && cost < minimum_cost) {
            minimum_cost = cost;
            input_number = i + 1;
        }
    }
    
    cout << input_number << endl;
    
    return 0;
}
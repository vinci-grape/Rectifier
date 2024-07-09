#include <iostream>
#include <vector>

using namespace std;

string solve(int n, vector<vector<int>>& ls_xyh) {
    int x0 = -1;
    int y0, h0;
    for (int i = 0; i < n; i++) {
        if (ls_xyh[i][2] > 0) {
            x0 = ls_xyh[i][0];
            y0 = ls_xyh[i][1];
            h0 = ls_xyh[i][2];
            break;
        }
    }
    
    vector<tuple<int, int, int>> cands;
    for (int cx = 0; cx < 101; cx++) {
        for (int cy = 0; cy < 101; cy++) {
            int ch = h0 + abs(cx - x0) + abs(cy - y0);
            cands.push_back(make_tuple(cx, cy, ch));
        }
    }
    
    for (auto xyh : ls_xyh) {
        int x = xyh[0];
        int y = xyh[1];
        int h = xyh[2];
        vector<tuple<int, int, int>> new_cands;
        for (auto cand : cands) {
            int cx = get<0>(cand);
            int cy = get<1>(cand);
            int ch = get<2>(cand);
            if (max(ch - abs(cx - x) - abs(cy - y), 0) == h) {
                new_cands.push_back(cand);
            }
        }
        cands = new_cands;
    }
    
    int xx = get<0>(cands[0]);
    int yy = get<1>(cands[0]);
    int hh = get<2>(cands[0]);
    
    return to_string(xx) + " " + to_string(yy) + " " + to_string(hh);
}

pair<int, vector<vector<int>>> readQuestion() {
    int n;
    cin >> n;
    
    vector<vector<int>> ls_xyh;
    for (int j = 0; j < n; j++) {
        vector<int> xyh(3);
        for (int i = 0; i < 3; i++) {
            cin >> xyh[i];
        }
        ls_xyh.push_back(xyh);
    }
    
    return make_pair(n, ls_xyh);
}

int main() {
    auto question = readQuestion();
    cout << solve(question.first, question.second) << endl;
}
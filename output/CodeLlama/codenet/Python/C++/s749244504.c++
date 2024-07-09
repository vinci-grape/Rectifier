#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>

using namespace std;

int main() {
    ifstream fin(0);
    int h, w;
    fin >> h >> w;
    vector<vector<int>> C(10, vector<int>(10, 0));
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            fin >> C[i][j];
        }
    }
    vector<vector<int>> A(h, vector<int>(w, 0));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            fin >> A[i][j];
        }
    }

    typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS, boost::no_property, boost::property<boost::edge_weight_t, int>> Graph;
    Graph G(10);
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (C[i][j] != 0) {
                boost::add_edge(i, j, C[i][j], G);
            }
        }
    }
    map<int, int> d;
    for (int i = 1; i < 10; ++i) {
        vector<int> p(10, 0);
        vector<int> d(10, 0);
        boost::dijkstra_shortest_paths(G, i, boost::predecessor_map(&p[0]).distance_map(&d[0]));
        d[i] = d[1];
    }

    int s = 0;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (A[i][j] == -1 || A[i][j] == 1) {
                continue;
            }
            s += d[A[i][j]];
        }
    }
    cout << s << endl;
    return 0;
}
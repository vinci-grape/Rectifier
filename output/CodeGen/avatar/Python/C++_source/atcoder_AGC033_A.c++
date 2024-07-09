#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;

int h, w;
vector<vector<int> > graph;

int main ( ) {
    cin >> h >> w;
    graph.resize ( h );
    for ( int i = 0; i < h; ++i ) {
        graph[i].resize ( w );
        for ( int j = 0; j < w; ++j ) {
            graph[i][j] = 0;
            if ( j == 0 ) {
                graph[i][j] = 1;
            }
            else if ( i == 0 ) {
                graph[i][j] = 1;
            }
            else {
                graph[i][j] = min ( graph[i][j - 1] + 1, min ( graph[i - 1][j] + 1, graph[i - 1][j - 1] + 1 ) );
            }
        }
    }
    for ( int i = 0; i < h; ++i ) {
        for ( int j = 0; j < w; ++j ) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << max ( *max_element ( graph.begin ( ), graph.end ( ) ) ) << endl;
    return 0;
}
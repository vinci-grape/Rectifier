#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;
int main ( ) {
    int N;
    cin >> N;
    vector < vector < int > > G ( N, vector < int > ( ) );
    for ( int i = 0 ; i < N - 1 ; i ++ ) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int K = 0;
    for ( int i = 0 ; i < N ; i ++ ) {
        queue < int > q;
        q.push(i);
        vector < int > visited(N,0);
        visited[i] = 1;
        while (!q.empty() ) {
            int v = q.front();
            q.pop();
            for ( int nex : G[v] ) {
                if ( visited[nex] ) continue;
                visited[nex] = 1;
                K = max(K,++visited[nex]);
                q.push(nex);
            }
        }
    }
    cout << K << endl;
    for ( auto value : visited ) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
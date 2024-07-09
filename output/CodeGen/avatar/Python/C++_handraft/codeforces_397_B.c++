#include <iostream>
#include <string>
using namespace std;

class CodeforcesTask397BSolution {
public:
    CodeforcesTask397BSolution ( ) {
        result = "";
        t = 0;
        queries = { };
    }
    void read_input ( ) {
        t = stoi ( cin );
        for ( int i = 0; i < t; ++i ) {
            vector<int> query;
            query.reserve ( 3 );
            for ( int j = 0; j < 3; ++j ) {
                query.push_back ( stoi ( cin ) );
            }
            queries.push_back ( query );
        }
    }
    void process_task ( ) {
        string res = "";
        for ( auto query : queries ) {
            int k = query [ 0 ] / query [ 1 ];
            res += ( k * query [ 2 ] >= query [ 0 ]? "Yes" : "No" ) + " ";
        }
        result = res;
    }
    string get_result ( ) {
        return result;
    }
private:
    int t;
    vector<vector<int>> queries;
    string result;
};

int main ( ) {
    CodeforcesTask397BSolution solver;
    solver.read_input ( );
    solver.process_task ( );
    cout << solver.get_result ( ) << endl;
    return 0;
}
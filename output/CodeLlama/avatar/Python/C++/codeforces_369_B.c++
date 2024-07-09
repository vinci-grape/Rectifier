#include <iostream>
using namespace std;
int get_nums ( int num , int t ) {
    int ans = 0;
    for ( int i = 0 ; i < num ; i++ ) {
        if ( i < t % num ) ans += t / num + 1;
        else ans += t / num;
    }
    return ans;
}
int main ( ) {
    int n , k , l , r , sa , sk;
    cin >> n >> k >> l >> r >> sa >> sk;
    int ans = get_nums ( k , sk ) + get_nums ( n - k , sa - sk );
    cout << ans << endl;
    return 0;
}
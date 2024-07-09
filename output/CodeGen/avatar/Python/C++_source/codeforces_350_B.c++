#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 1005;

int n;
int t[maxn];
int a[maxn];
int cnt[maxn];
int ans[maxn];

int main ( ) {
    while ( scanf ( "%d", &n )!= EOF ) {
        for ( int i = 1 ; i <= n ; i ++ ) {
            scanf ( "%d", &t[i] );
            cnt[t[i]] ++;
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            scanf ( "%d", &a[i] );
            cnt[a[i]] --;
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt > ans[0] ) {
                    ans[0] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt > ans[0] && crt < ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt > ans[0] && crt > ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt > ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt < ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt < ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt > ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt > ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt < ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt > ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt < ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt > ans[n] ) {
                    ans[n] = crt;
                }
            }
        }
        for ( int i = 1 ; i <= n ; i ++ ) {
            if ( t[i] == 1 ) {
                int crt = i;
                int x = a[i];
                while ( cnt[x] == 1 ) {
                    crt = x;
                    x = a[x];
                }
                if ( crt < ans[0] && crt < ans[n] ) {
                    ans[n] = crt;
                }
            }
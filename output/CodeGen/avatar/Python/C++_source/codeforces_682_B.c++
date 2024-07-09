#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

#define ll long long

ll n, l, f, c, i, j ;

ll arr[1000005] ;

ll gcd ( ll a, ll b )
{
    ll c ;
    while ( b )
    {
        c = a % b ;
        a = b ;
        b = c ;
    }
    return a ;
}

ll lcm ( ll a, ll b )
{
    return a * b / gcd ( a, b ) ;
}

ll gcd_arr ( ll a, ll b, ll n )
{
    ll c ;
    while ( b )
    {
        c = a % b ;
        a = b ;
        b = c ;
    }
    return a ;
}

ll lcm_arr ( ll a, ll b, ll n )
{
    ll c ;
    while ( b )
    {
        c = a % b ;
        a = b ;
        b = c ;
    }
    return a ;
}

int main ( )
{
    scanf ( "%lld", &n ) ;
    for ( i = 0 ; i < n ; i ++ )
    {
        scanf ( "%lld", &l ) ;
        arr[i] = l ;
    }
    sort ( arr, arr + n ) ;
    c = 0 ;
    for ( i = 0 ; i < n ; i ++ )
    {
        if ( arr[i] > c )
        {
            c = arr[i] ;
        }
    }
    c ++ ;
    printf ( "%lld", c ) ;
    return 0 ;
}
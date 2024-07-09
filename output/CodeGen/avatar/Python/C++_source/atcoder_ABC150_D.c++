#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    int num[30];
    int num_set[30];
    int two_times_set[30];
    int i, j;
    int lcm;
    int num_list[30];
    int lcm_list[30];
    int num_list_len;
    int lcm_list_len;
    int num_list_i;
    int lcm_list_i;
    int num_i;
    int lcm_i;
    int result;
    while ( scanf ( "%d", &n )!= EOF ) {
        for ( i = 0 ; i < n ; i ++ ) {
            scanf ( "%d", &num[i] );
            num_set[i] = num[i];
        }
        num_list_len = 0;
        lcm_list_len = 0;
        for ( i = 0 ; i < n ; i ++ ) {
            for ( j = 1 ; j < 30 ; j ++ ) {
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i] / 2;
                num_list_len ++;
                lcm_list_len ++;
                num_list[num_list_len] = num[i] / 2;
                lcm_list[lcm_list_len] = num[i]
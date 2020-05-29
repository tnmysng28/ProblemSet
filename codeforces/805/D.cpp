//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
 
#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <climits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <ratio>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
 
#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
typedef long long int  bigint ;
typedef std::vector< int > vi;
typedef std::vector< long long int > vll;
typedef std::vector< vi > vvi;
 
using namespace std;

bigint expo( bigint a , bigint b ){
    bigint ans = 1 ;
    while( b > 0 ){
        if( b & 1 )
            ans = (ans % mod * a % mod ) % mod ;
        a = ( a % mod * a % mod ) % mod ;
        b >>= 1 ;
    }
    return ans ;
}
int main(){
    FAST() ;
    string str ; cin >> str ;
    int N = ( int ) str.length() ;
    int suffix[N] ;
    if( str[0] == 'a' )
        suffix[0] = 1 ;
    else
        suffix[0] = 0 ;
    for( int i = 1 ; i < N ; i++ ){
        suffix[i] = suffix[i-1] ;
        if( str[i] == 'a' )
            suffix[i]++ ;
    }
    bigint ans = 0 ;
    for( int i = N - 1  ; i >= 0 ; i-- ){
        if( str[i] == 'b' ){
            ans = (ans % mod + (expo(2, suffix[i]) - 1 + mod) % mod ) % mod  ;
        }
    }
    cout <<( ans + mod ) % mod  << endl ;
        
    return 0 ;
}

//
//  CPlibrary
//
//  Created by Tanmay Singh on 3/03/2020.
// INDIAN INSTITUTE OF TECHNOLOGY (BHU) , VARANASI
//  Copyright © 2020 Tanmay Singh. All rights reserved.
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
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

int main(){
    int N ; cin >> N ;
    string str ; cin >> str ;
    int ans = 0 , cnt = 0 ;
    char ch[3] = { 'R' , 'G' , 'B' } ;
    for( int k = 0 ; k < 3 ; k++ ){
        cnt = 0 ;
        for( int i = 0 ; i < N ; i++ ){
            if( str[i] == ch[k] ){
                cnt++ ;
            }
            else if( cnt > 0 ){
                ans += cnt - 1 ;
                cnt = 0 ;
            }
    }
        if( cnt > 0 )
            ans += cnt - 1 ;
}
    cout << ans << endl ;
    return 0;
}

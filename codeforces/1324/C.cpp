//
//  CPlibrary
//
//  Created by Tanmay Singh on 21/12/19.
//  Copyright © 2019 Tanmay Singh. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <set>
#include <map>
#include <cstdio>
#include <iterator>
#include <string>
#include <stack>
#include <deque>
 
#define FAST(); ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MAX 1000001
#define loopchalao(i , N) for( int i = 0 ; i < N ; i++ )
typedef long long  int  bigint ;
 
int spf[MAX] ;
using namespace std ;
 



    int main()
    {
        FAST();
      
        int T;
        cin >> T ;
        while( T-- ){
        string str ;
        cin >> str ;
            str += 'R' ;
        bigint L = str.length() ;
        
            int ans = 0 , local_ans = 0 ;
        for( int i = 0 ; i < L ; i++ ){
            local_ans = 0 ;
            if( str[i] == 'L' ){
                for( int j = i ; j < L ; j++ ){
                    if( str[j] != 'L' ){
                        i = j ;
                        break;
                    }
                    local_ans ++ ;
                }
                ans = max ( local_ans , ans ) ;
            }
        }
        cout << ans + 1  << endl ;
        }
        return 0 ;
    }

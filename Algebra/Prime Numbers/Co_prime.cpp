/**
 *    author: A K M S Limon
 *    created: 19-August-2023  10:31:31
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int m, a; 
    cin>>a>>m;
    for(int i = 0; i<m; i++){
        if(__gcd(m, i)==1) cout<<i<<' ';
    }
    cout<<'\n';
    for(int i = 0+a; i<m+a; i++){
        if(__gcd(m, i)==1) cout<<i<<' ';
    }
    return 0;
}
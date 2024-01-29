/**
 *    author: A K M S Limon
 *    created: 30-January-2024  02:48:34
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ncr(ll n, ll r) {
    ll sum = 1;
    for(int i = 1; i <= r; i++){
        sum = sum * (n - r + i) / i;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    
    return 0;
}
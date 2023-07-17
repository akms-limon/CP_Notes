/**
 *    author: A K M S Limon
 *    created: 01-June-2023  15:48:25
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9+7;

//(e^n)%mod
ll BinExpoRecur(ll e, ll n){
    if(n==0) return 1; 
    ll x = BinExpoRecur(e, n/2);
    if(n%2==0){
        return 1LL*x*x%mod;
    }
    else{
        return ((1LL*x*x)%mod*e)%mod;
    }
}

// (a*n)%mod
ll bigMultiRecur(ll a, ll n){
    if(n==1) return a%mod;
    ll x = bigMultiRecur(a, n/2);
    if(n%2==0){
        return (x+x)%mod;
    }
    else {
        return (((x+x)%mod)+a)%mod;
    }
}

// (a*n)%mod
ll binMulti(ll a, ll n){
    ll ans = 0;
    while(n){
        if(n&1){
            ans= (ans+a)%mod;
        }
        a = (a+a)%mod;
        n>>=1;
    }
    return ans;
}

// (e^n)%mod
ll binExpo(ll e, ll n){
    ll ans = 1; 
    while(n){
        if(n&1) {
            ans = binMulti(ans, e);
        }
        e = binMulti(e, e);
        n>>=1;
    }
    return ans;
}

// (1/a)%mod
ll bininverse(ll a, ll mod){   
    return binExpo(a, mod-2);
}

int main() {
    ll e = 3, n = 1000000000;
    ll ans = BinExpoRecur(e, n);
    cout<<ans<<'\n';
    ll ans2 = binExpo(e, n);
    auto st = clock();
    cerr<<1.0*(clock()-st)/CLOCKS_PER_SEC<<endl;
    return 0;
}
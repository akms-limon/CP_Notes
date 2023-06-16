/**
 *    author: A K M S Limon
 *    created: 01-June-2023  15:48:25
**/
#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

//(e^n)%mod
int BinExpoRecur(int e, int n){
    if(n==0) return 1; 
    int x = BinExpoRecur(e, n/2);
    if(n%2==0){
        return 1LL*x*x%mod;
    }
    else{
        return ((1LL*x*x)%mod*e)%mod;
    }
}

// (a*n)%mod
int bigMultiRecur(int a, int n){
    if(n==1) return a%mod;
    int x = bigMultiRecur(a, n/2);
    if(n%2==0){
        return (x+x)%mod;
    }
    else {
        return (((x+x)%mod)+a)%mod;
    }
}

// (a*n)%mod
int binMulti(int a, int n){
    int ans = 0;
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
int binExpo(int e, int n){
    int ans = 1; 
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
int bininverse(int a, int mod){   
    return binExpo(a, mod-2);
}

int main() {
    int e = 3, n = 1000000000;
    int ans = BinExpoRecur(e, n);
    cout<<ans<<'\n';
    int ans2 = binExpo(e, n);
    auto st = clock();
    cerr<<1.0*(clock()-st)/CLOCKS_PER_SEC<<endl;
    return 0;
}
/**
 *    author: A K M S Limon
 *    created: 14-August-2023  22:58:57
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

//problem link : https://www.spoj.com/problems/PRIME1/
//problem link : https://www.spoj.com/problems/PRINT/

const int N = 1000000;
bitset<N+1>sieve;

void createSieve(){
    sieve.set();
    sieve[0]=sieve[1]=0;
    for(int i = 2; i*i<=N; i++){
        if(sieve[i]==true){
            for(int j = i*i; j<=N; j+=i){
                sieve[j]=false;
            }
        }
    }
}

vector<int>generatePrimes(int N){
    vector<int>ds;
    for(int i = 2; i<=N; i++){
        if(sieve[i]) ds.push_back(i);
    }
    return ds;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    createSieve();
    int t; cin>>t; 
    while(t--){
        ll l, r; cin>>l>>r;

        vector<int>primes = generatePrimes(sqrt(r));
        vector<int>segment(r-l+1, 1);

        for(auto x : primes){
            int start = (l/x)*x;
            if(start<l) start+=x;
            if(x>=l && x<=r) start=2*x;
            for(int j = max(start, x*x); j<=r; j+=x){
                segment[j-l]=false;
            }
        }   

        for(int i = l; i<=r; i++){
            if(segment[i-l]==1 && i!=1){
                cout<<i<<'\n';
            }
        }cout<<'\n';
    }
    return 0;
}
/**
 *    author: A K M S Limon
 *    created: 15-August-2023  08:53:41
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int n = 10000000;
bitset<10000001>b;
vector<int>primes;

void sieve(){
    b.set();
    b[0]=b[1]=0;
    for(ll i = 2; i*i<=n; i++){
        if(b[i]){
            primes.push_back(i);
            for(ll j = i*i; j<=n; j+=i){
                b[j]=0;
            }
        }
    }
    for(int i=sqrt(n)+1; i<=n; i++){
        if(b[i]) primes.push_back(i);
    }
}

int main() {
    sieve();
    for(int i = 0; i<=100; i++){
        cout<<primes[i]<<'\n';
    }
    return 0;
}
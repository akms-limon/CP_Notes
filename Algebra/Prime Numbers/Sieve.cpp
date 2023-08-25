/**
 *    author: A K M S Limon
 *    created: 15-August-2023  16:40:00
**/
#include <bits/stdc++.h>
using namespace std;

const int n = 100000; 
bitset<n+1>sieve;
vector<int>primes;

void bitsetSeive(){ //use this when N is big but other constrains is small
    sieve.set();
    sieve[0]=sieve[1]=0;
    for(int i = 2; i*i<=n; i++){
        if(sieve[i]){
            primes.push_back(i);
            for(int j=i*i; j<=n; j+=i){
                sieve[i]=0;
            }
        }
    }
}

vector <int> v;
bool vis[n];

void Sieve()  //From masum vai : use this when N is big but other constrains is small 
{
    vis[1]=true;
    v.push_back(2);
    for(int i=3;i<N;i+=2)
    {
        if(vis[i]) continue;
        v.push_back(i);
        for(int j=i*3;j<N;j+=i*2)   vis[j]=true;
    }
}

const int N = 1000;
vector <int> p[N];
bool vis[N];

void Sieve() {   //use this when N is small and other constrains is big
    vis[1]=true;
    for(int i=2;i<N;i++) {
        if(vis[i]) continue;
        for(int j=i;j<N;j+=i) {
            vis[j]=true;
            p[j].push_back(i);
        }
    }
}

vector<int>factorize(int m){
    vector<int>factor;
    int i = 0;
    int x = primes[i];
    while(x*x<=m){
        if(m%x==0){
            factor.push_back(x);
            while(m%x==0){
                m/=x;
            }
        }
        i++;
        x = primes[i];
    }
    if(m!=1) factor.push_back(m);
    return factor;
}

int main() {
    
    bitsetSeive();
    int t; cin>>t;
    while(t--){
        int m; cin>>m;
        vector<int>factor = factorize(m);

        for(auto it : factor){
            cout<<it<<' ';
        } cout<<'\n';
    }
    return 0;
}
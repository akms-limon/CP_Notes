/**
 *    author: A K M S Limon
 *    created: 22-August-2023  10:49:08
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc int t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        /******find the smallest divisor of the numbers from 1 to n. 1<n<10e6. note that smallest 
    divisor is always a prime number. 
    TIME COMPLEXITY : O(N log log(N)) *********/
    int n = 100000;
    vector<int>spf(n+1);
    for(int i = 1; i<=n; i++){
        spf[i]=i;
    }
    for(int i = 2; i<=n; i++){
        for(int j = i; j<=n; j+=i){
            spf[j]=min(spf[j], i);
        }
    }
    // for(int i = 1; i<=10; i++){
    //     cout<<spf[i]<<' ';
    // }
    // cout<<'\n';
    return 0;
}
/**
 *    author: A K M S Limon
 *    created: 08-June-2023  02:57:20
**/
#include <bits/stdc++.h>
using namespace std;

int d[10000];  //d[i] = number of divisor of i.
int sd[10000];  // sd[i] = smallest divisor of i.

int main() {



    /****Find number of divisors of the numbers from 1 to n.   1<n<10e6  
     * TIME COMPLEXITY : O(N log log(N)) ****/
    int n=10000;
    for (int i = 1; i <=n; i++){
        for (int j = i; j <=n; j+=i) {
            d[j]++;
        }
    }
    // for(int i = 1; i<=n; i++){
    //     cout<<d[i]<<' ';
    // }
    // cout<<'\n';




    /******find the smallest divisor of the numbers from 1 to n. 1<n<10e6. note that smallest 
    divisor is always a prime number. 
    TIME COMPLEXITY : O(N log log(N)) *********/
    n = 100;
    for(int i = 1; i<=n; i++){
        sd[i]=i;
    }
    for(int i = 2; i<=n; i++){
        for(int j = i; j<=n; j+=i){
            sd[j]=min(sd[j], i);
        }
    }
    // for(int i = 1; i<=n; i++){
    //     cout<<sd[i]<<' ';
    // }
    // cout<<'\n';




    /******you have given q queries. each queries take input a number n. and you have to 
    print all prime factors of the given number n. 1<n<10e6
    TIME COMPLEXITY : O(N log log(N)) * O(log(N))   *****/
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        vector<int>ans;
        while(n>1){
            ans.push_back(sd[x]);
            x/=sd[x];
        }
        for(int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<' ';
        }cout<<'\n';
    }
    return 0;
}
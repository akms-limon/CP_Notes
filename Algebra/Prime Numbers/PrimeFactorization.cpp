/**
 *    author: A K M S Limon
 *    created: 05-June-2023  03:20:25
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin>>n;
    vector<pair<int,int>>primeFactors;
    for (int i = 2; i*i <= n; i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            primeFactors.push_back(make_pair(i,cnt));
        }
    }
    if(n>1) primeFactors.push_back(make_pair(n, 1));
    for(auto it : primeFactors){
        cout<<it.first<<'^'<<it.second<<'\n';
    }
    return 0;
}
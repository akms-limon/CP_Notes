/**
 *    author: A K M S Limon
 *    created: 05-June-2023  03:35:21
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n; 
    vector<int>v;
    for (int i = 2; i*i <= n; i++) {
        if(n%i==0){
            while(n%i==0) {
                v.push_back(i);
                n/=i;
            }
        }
        if(n>1) v.push_back(n);
    }
    
    map<int, int>mp;
    for (int i = 0; i < v.size(); i++) {
        mp[v[i]]++;
    }
    long long dvsrcnt = 1;
    for(auto it : mp){
        dvsrcnt*=(it.second+1);
    }
    cout<<dvsrcnt<<'\n';
    return 0;
}
/**
 *    author: A K M S Limon
 *    created: 01-July-2023  00:02:17
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //Problem link : https://www.codingninjas.com/studio/problems/count-all-sub-arrays-having-sum-divisible-by-k_973254
    int tc; cin>>tc;
    while(tc--){
        int n, k; cin>>n>>k;
        int a[n]; 
        for(int i=0; i<n; i++){
            cin>>a[i];
            a[i]%=k;
        }
        for(int i =1; i<n; i++){
            a[i]=(a[i]%k+a[i-1]%k)%k;
        }
        for(int i =0; i<n; i++){
            a[i]+=k;
            a[i]%=k;
        }
        map<int, int>m;
        for(auto it : a){
            m[it]++;
        }
        long long ans = 0;
        for(auto it : m){
            ans+= ((it.second)*(it.second-1)/2);
            if(it.first==0) ans+=it.second;
        }
        cout<<ans<<'\n';
    }
      
    return 0;
}
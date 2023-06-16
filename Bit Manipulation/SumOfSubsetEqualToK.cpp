/**
 *    author: A K M S Limon
 *    created: 23-April-2023  23:32:22
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin>>n>>k;
    int a[n]; 
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int ans = 0;
    for (int mask = 0; mask < (1<<n); mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if((mask>>i)&1){
                sum+=a[i];
            }
        }
        if(sum == k){
            ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
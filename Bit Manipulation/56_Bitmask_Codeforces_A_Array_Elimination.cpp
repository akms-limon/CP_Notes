/**
 *    author: A K M S Limon
 *    created: 04-May-2023  18:56:44
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n]; 
        for (int i = 0; i < n ; i++) {
            cin>>a[i];
        }
        vector<int>v(32, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 32; j++) {
                if((a[i]>>j)&1){
                    v[j]++;
                }
            }
        }
        vector<int>ans;
        for (int i = 1; i <= n ; i++) {
            bool b = true;
            for (int j = 0; j < 32 ; j++) {
                if(v[j]%i!=0) {
                    b = false;
                }
            }
            if(b) ans.push_back(i);
        }
        for(auto it : ans){
            cout<<it<<' ';
        }cout<<'\n';
    }
    return 0;
}
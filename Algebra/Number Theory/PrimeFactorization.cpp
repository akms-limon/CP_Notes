/**
 *    author: A K M S Limon
 *    created: 05-June-2023  03:20:25
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin>>n;
    vector<int>v;
    for (int i = 2; i*i <= n; i++){
        if(n%i==0){
            while(n%i==0){
                v.push_back(i);
                n/=i;
            }
        }
        if(n>1) v.push_back(n);
    }
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<' ';
    }
    cout<<'\n';
    return 0;
}
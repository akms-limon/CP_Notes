#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        int n, q; 
        cin>>n>>q;
        int a[n+10];
        for(int i = 1; i<=n; ++i){
            cin>>a[i];
        }
        int forword[n+10], bacword[n+10];
        forword[0]=bacword[n+1]=0;
        for (int i = 1; i <=n ; ++i) {
            forword[i]=__gcd(a[i], forword[i-1]);
        }
        for(int i = n; i>0; i--){
            bacword[i]=__gcd(a[i], bacword[i+1]);
        }
        while(q--){
            int l, r; 
            cin>>l>>r; 
            cout<<__gcd(forword[l-1], bacword[r+1])<<'\n';
        }
    }
    return 0;
}           
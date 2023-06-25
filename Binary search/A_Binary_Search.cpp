/**
 *    author: A K M S Limon
 *    created: 14-February-2023  01:55:57
**/
#include <bits/stdc++.h>
using namespace std;

const int N=1e5+9;
int a[N];

bool binary_search_by_recursion(int lo, int hi, int x){
    if(lo>hi) return false;
    int mid  = (lo + hi)/2;
    if(x==a[mid]) return true;
    else if(x<a[mid]) return binary_search_by_recursion(lo, mid-1, x);
    else return binary_search_by_recursion(mid+1, hi, x);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k; cin>>n>>k;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    
    while(k--){
        int x; cin>>x;
        bool ok = binary_search_by_recursion(0, n-1, x);
        if(ok) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
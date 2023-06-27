/**
 *    author: A K M S Limon
 *    created: 05-May-2023  10:38:07
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*problem : একটি array তে 10e5 টি এলিমেন্ট আছে । প্রত্যেকটি এলিমেন্ট<=10e5 / একটি subarray এর
    সব গুলা এলিমেন্ট এর এক্সর যদি শুন্য হলে তাকে
    পারফেক্ট sabarray বলে । তাহলে array তে কয়টি পারফেক্ট subarray থাকবে । */
    int n; cin>>n;
    int a[n]; 
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 1; i < n; i++){
        a[i]^=a[i-1];
    }
    cout<<'\n';
    map<int, int>mp;
    for(auto it : a){
        mp[it]++;
    }
    int ans=0;
    for(auto it : mp){ 
        int x = it.second;
        ans+= x*(x-1)/2;
    }
    cout<<ans<<endl;
    return 0;
}
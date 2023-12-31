/**
 *    author: A K M S Limon
 *    created: 05-May-2023  17:31:11
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    //problem link : https://practice.geeksforgeeks.org/problems/sum-of-products5049/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
    int n; cin>>n;
    int a[n]; 
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long ans = 0;
    for (int i = 0; i < 32; i++)
    {
        long long zero = 0, one = 0;
        for (int j = 0; j < n; j++)
        {
            if(a[j]&(1<<i)) one++;
            else zero++;
        }
        ans+=(one*(one-1)/2)*(1<<i);
    }
    cout<<ans<<'\n';
    return 0;
}
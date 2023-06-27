#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin>>n; int ara[n+1];
    for (int i = 1; i<= n; i++)
    {
        cin>>ara[i];
    }
    int prifix_sum[n+1]; 
    prifix_sum[0]=0;
    for (int i = 1; i <= n; i++)
    {
        prifix_sum[i]=prifix_sum[i-1]+ara[i];
    }
    int l, m; cin>>l>>m;
    int sum=prifix_sum[m]-prifix_sum[l-1];
    cout<<sum<<'\n';
    return 0;
}
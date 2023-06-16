#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<'\n';
#define nn cout<<"NO"<<'\n';
#define nl '\n';
#define nll cout<<'\n';
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
#define Do_not_copy_code ios_base::sync_with_stdio(NULL);cin.tie(NULL);

using namespace std;

int main()
{
Do_not_copy_code

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
    cout<<sum<<nl;
    return 0;
}
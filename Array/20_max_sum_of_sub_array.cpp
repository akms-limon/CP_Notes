#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define nl "\n"
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int a[11];
int main()
{
    int n; cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
    int mx=-1e9;
    for (int i = 1; i <= n; i++)
    {
        int sum=0;
        for (int j = i; j <= n; j++)
        {
            sum+=a[j];
            mx=max(sum, mx);
        }
    }
    cout<<mx<<endl;
    return 0;
}
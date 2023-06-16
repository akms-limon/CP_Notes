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
    cout<<"enter your num : "<<nl;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}
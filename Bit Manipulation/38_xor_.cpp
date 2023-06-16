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

    // x^x=0, a^b = c^d hole a=c^d^b. 
    int n=1e5; int c=2;
    int x,y, cnt=0;
    for (int i = 0; i <= n; i++)
    {
        y=c^x;
        if(c>=0 and c<=n)
        cnt++;
    }
    cout<<cnt<<nl;
    return 0;
}
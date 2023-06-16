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

     //fill function. semiller to memset function. but we can use any integer in this function.
    int ara1[10];
    fill(ara1+0, ara1+10, 23);
    cout<<"using fill function the value of the array is : "<<nl; 
    for (int i = 0; i < 10; i++)
    {
        cout<<ara1[i]<<" ";
    }
    return 0;
}
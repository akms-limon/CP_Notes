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

    //memset function. to make all the index same we can use memset function. memset always use for character or 1 bite. or 8 bit.
    //memset is use for 0 and -1.
    int ara[10];
    memset(ara, -1, sizeof ara);
    cout<<"using memset function the value of the array is : "<<nl;
    for (int i = 0; i < 10; i++)
    {
        cout<<" "<<ara[i];
    }
    return 0;
}
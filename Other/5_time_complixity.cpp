#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define nl "\n"
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int main()
{
    int n; cin>>n;
    for (int i = 0; i < n; i++)   ////10^8 operation = 1 second 
    {
        cout<<i<<endl;  //time complixity of this program is BIGO(n).
    }
    int n; cin>>n;      //10^8 operation = 1 second 
    for (int i = 0; i < n; i++)   
    {
        for (int j = 0; j < n; j++)
        {
            cout<<i<<endl; //time complixity of this program is BIGO(n^2).
        }
    }
    int n; cin>>n;      //10^8 operation = 1 second 
    for (int i = 0; i < n; i++)   
    {
        for (int j = 0; j < n; j++)
        {
            cout<<i<<endl; //time complixity of this program is BIGO(n^2). actually time complixity is : n^2+n but n is negligible.
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<i<<endl;
    }

    int n; cin>>n;
    for (int i = 1; i < n; i*=2)
    {
        cout<<i<<endl; //time complixity of this code is log2(n).
    }
    return 0;
}
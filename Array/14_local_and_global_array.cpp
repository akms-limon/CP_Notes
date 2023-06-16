#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define nl "\n"
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int ara[10];   //if we declare a array globaly it puts 0 in all index of that array. and the array size is must be less then 10e6
int main()
{
    int ara1[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"1st array "<<i+1<<"th element : "<<ara[i]<<endl;
        cout<<"2nd array "<<i+1<<"th element : "<<ara1[i]<<endl;
    }
    
    
    return 0;
}

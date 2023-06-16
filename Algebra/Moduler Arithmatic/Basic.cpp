/**
 *    author: A K M S Limon
 *    created: 21-May-2023  13:52:39
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    
    long long int mod = 1e9+7;
    ll  a = 1e12, b = 1e11;
    
    // mod for negetive value
    a = -32434535;
    cout<<((a%mod)+mod)%mod<<endl;  //for geting positive value we have to add mod again 

    // mod for multiply
    a = 1e12, b  = 1e11;
    cout<<((a%mod)*(b%mod))%mod<<endl; 
    //or, 
    cout<< 1LL*a*b%mod<<endl;
    return 0;
}
/**
 *    author: A K M S Limon
 *    created: 23-April-2023  14:21:20
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long a=1e10, b=5;
    cout<<a<<" "<<b<<'\n';
    cout<<(a|b)<<'\n';
    cout<<(a&b)<<'\n';
    cout<<(a^b)<<'\n';
    cout<<(a<<1)<<'\n';
    cout<<(b>>1)<<'\n';
    if((b>>40)&1){
        cout<<"40th bit is on."<<'\n';
    }
    else {
        cout<<"40th bit is off."<<'\n';
    }
    int k = 5;
    b = (b|(1<<k)); //setting the kth bit to 1
    b = (b&((1LL<<62)-1-(1<<k)))<<'\n';  //seting the kth bit to 0
    int n = 3;
    return 0;

}
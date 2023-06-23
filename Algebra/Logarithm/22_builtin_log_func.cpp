#include<bits/stdc++.h>
#define nl '\n';

using namespace std;

int main()
{
    
    /*only three builtin function is available. log(n), log2(n) and log10(n) is builtin function, 
    in other option for example if we want to find the value of log6(n) then we have to write (log(n)/log(6))*/
    cout<<log(10)<<nl; //log(n) means the base of this log is (e).
    cout<<log2(16)<<nl;
    cout<<log10(100)<<nl;
    int n = 36;
    cout<<(log(n)/log(6))<<nl; //log6(n)=(log(n)/log(6))
    return 0;
}
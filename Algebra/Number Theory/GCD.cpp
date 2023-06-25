/**
 *    author: A K M S Limon
 *    created: 09-June-2023  00:10:16
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // How many common divisor is possible of two number a and b,   1<a<10e12, 1<b<10e18, 
    // Ans : Number of common divisors of a and b = number divisor of __gcd(a, b); Gcd is oviously smaller then the small element. 
    // Note : if g = (__gcd(a, b)); then (a+b) is divisible by g;
    // ******* Most important concept of gcd, If a>b  __gcd(a, b)=__gcd(a+b, b)=__gcd(a-b, b)=__gcd(a-3b, b)=__gcd(a-4b, b);   ****** /

    return 0;
}
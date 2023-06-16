/**
 *    author: A K M S Limon
 *    created: 04-May-2023  22:54:42
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    bitset<30>b(11);  // b = binary of 11 which length is 30
    cout<<b<<'\n'; 
    cout<<b[3]<<'\n'; //we can access the index of bitset.
    cout<<b.count()<<'\n'; //how many zero in bitset b
    bitset<30>c("10001110");
    cout<<c<<'\n';
    bitset<30>x(29), y("10101011");
    cout<<x<<'\n';
    cout<<y<<'\n';
    cout<<(b&c)<<'\n'; //bitset a time complexity (max(b, c)/32) 
    cout<<(x&y)<<'\n';
    return 0;
}  
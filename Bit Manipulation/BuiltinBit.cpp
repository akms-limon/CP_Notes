/**
 *    author: A K M S Limon
 *    created: 25-April-2023  14:04:09
 **/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 11;
    cout << __builtin_popcount(n) << '\n'; // count how many 1 in this numbers binary form....
    int a = 8;
    cout << __builtin_clz(a) << '\n'; // count how many leading zeros in this number's binary form...
    cout << __builtin_ctz(a) << '\n'; // count how many trailing zeros in this number's binary form...

    // checking if this number is a power of 2. is  x == 2^n
    int x = 8;
    if (__builtin_popcount(x) == 1)
        cout << "This number is a power of two." << '\n';
    if (((x) & (x - 1)) == 0)
        cout << "This number is a power of two." << '\n';
    //if 2^k = n find the value of k
    n = 16;
    cout<<31-__builtin_clz(n)<<'\n'; //here most significant bit's position is the power of two...
    //find the least significant bit of a binary number
    n = 7;
    cout<<__builtin_ctz(n)<<'\n';
    return 0;
}
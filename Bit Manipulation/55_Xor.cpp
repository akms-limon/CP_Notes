/**
 *    author: A K M S Limon
 *    created: 24-April-2023  10:58:07
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int even = 4, odd = 5, even1 = 6, odd1 = 7;
    cout<<(even^odd)<<'\n'; //consicutive two numbers X-OR is equal to 1 but first number must be even
    cout<<(even^odd^even1^odd1)<<'\n';  ////consicutive four numbers X-OR is equal to 0 but first number must be even
    cout<<(0^1^2^3)<<'\n';
    cout<<(1^2^3^4)<<'\n';
    int n = 5; 
    cout<<(n^n)<<'\n'; // n ke even sonkhok bar n diye x-or korle 0 hobe. r odd sonkhok bar korle n hobe.
    cout<<(n^n^n)<<'\n';
    // x^x=0, a^b = c^d hole a=c^d^b. 
    // if (x^y = 0) hoy tahole (x=y) hobe must.
    
    //problem1
    //find how many pair possible where ai^aj = 0 in a array, where i<j
    // ans = jei pair gulate ai == aj segular value zero..

    //problem2
    //how many pair posible where ai^aj^ak = 0
    // n=2000, arr[n]; 
    //O(n^2)  (ai^aj=ak) hole ai^aj^ak = 0 hobe.

    //problem3
    //

    return 0;
}
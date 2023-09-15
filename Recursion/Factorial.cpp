/**
 *    author: A K M S Limon
 *    created: 26-August-2023  01:05:11
**/
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n=5;
    cout<<factorial(5)<<'\n';
      
    return 0;
}
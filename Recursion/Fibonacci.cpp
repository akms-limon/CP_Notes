/**
 *    author: A K M S Limon
 *    created: 26-August-2023  01:53:33
**/
#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cout<<fibo(7)<<'\n';
      
    return 0;
}
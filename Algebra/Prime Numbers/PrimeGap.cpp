/**
 *    author: A K M S Limon
 *    created: 08-June-2023  23:36:03
**/
#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i = 2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    
    // If we find we can see that the maximum difference between two prime number is almost (log(n))^2 

    /********** We have given a number n. we have to find the next prime after the number n. 1<n<10e9 **********/
    int n; cin>>n;
    for(int i = n+1; ; i++){
        if(isprime(i)){
            cout<<i<<'\n';
            break;
        }
    }
    return 0;
}
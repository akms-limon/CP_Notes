/**
 *    author: A K M S Limon
 *    created: 26-August-2023  01:05:11
**/
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    // at first I have to write the base case.
    if(n==0){
        return 1;
    }
    
    // then the function which solve the question
    return n * factorial(n-1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n=5;
    cout<<factorial(5)<<'\n';
      
    return 0;
}
/**
 *    author: A K M S Limon
 *    created: 09-June-2023  01:45:23
**/
#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(a==0) return b; 
    if(b==0) return a;
    if(b>a) swap(a, b);
    return GCD(a%b, b);
}

int main() {
    
    int a = 10, b= 15; 
    int ans = GCD(a,b);
    cout<<ans<<endl;
      
    return 0;
}
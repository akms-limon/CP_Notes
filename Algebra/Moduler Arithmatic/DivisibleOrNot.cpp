/**
 *    author: A K M S Limon
 *    created: 30-June-2023  01:38:31
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    /*Given a big number as string length is 10^5, we have to check the number is divisible by 
    k or not  */

    string s; int k; 
    cin>>s>>k;
    int ans=0;
    for(int i = 0; i<s.size(); i++){
        ans = (ans*10+(s[i]-'0'))%k;
    }
    cout<<ans<<'\n';
    return 0; 
}
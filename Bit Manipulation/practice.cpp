/**
 *    author: A K M S Limon
 *    created: 04-May-2023  21:45:55
**/
#include <bits/stdc++.h>
using namespace std;

void printbinary(int a){
    for(int i = 10; i>=0; i--){
        cout<<((a<<i)&1);
    }
    cout<<'\n';
}

int main() {
      int a = 7;
      printbinary(a);
    return 0;
}
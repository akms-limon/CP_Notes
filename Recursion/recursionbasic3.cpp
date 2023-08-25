/**
 *    author: A K M S Limon
 *    created: 26-August-2023  00:20:01
**/
#include <bits/stdc++.h>
using namespace std;

void recurse(int count){
    if(count>5){
        return;
    }
    cout<<"Count : "<<count<<'\n';
    recurse(count+1);
    cout<<"Count : "<<count<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    recurse(1);
      
    return 0;
}
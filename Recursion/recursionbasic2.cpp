/**
 *    author: A K M S Limon
 *    created: 25-August-2023  23:37:53
**/
#include <bits/stdc++.h>
using namespace std;

void recurse(int count){
    if(count>5){
        return;
    }
    cout<<"My name is limon"<<'\n';
    recurse(count+1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    recurse(1);
    
    return 0;
}
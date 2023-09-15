/**
 *    author: A K M S Limon
 *    created: 26-August-2023  00:40:46
**/
#include <bits/stdc++.h>
using namespace std;

void recurse(){
    static int count = 1; 
    if(count>5){
        return;
    }
    cout<<"count : "<<count<<'\n';
    count = count+1;
    recurse();
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    recurse();
      
    return 0;
}
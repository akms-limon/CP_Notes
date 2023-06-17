/**
 *    author: A K M S Limon
 *    created: 17-June-2023  01:22:45
**/
#include <bits/stdc++.h>
using namespace std;

bitset<1000000001>arr;

int main() {
    
    int k = -1;
    for(int i = 2; i<=100000000; i++){
        if(!arr[i]){
            if(++k%100==0)
                cout<<i<<endl;
            if(i<=10000)
            for(int j = 2; i*j<=100000000; j++){
                arr[i*j]=true;
            }
        }
    }
    return 0;
}